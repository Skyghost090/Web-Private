#!/bin/bash
function addSite {
    adress=$(zenity --entry --title="Add Site" --text="Site Adress")

    if [ "$adress" = "" ]; then
        exit
    fi

    pkexec sh -c 'echo "127.0.0.1 www.youtube.com" >> /etc/hosts && systemctl restart NetworkManager'
}

function remove {
    Option=$(zenity --list --title="Blocked Sites" \
    --column="Sites" --hide-header \
    $(cat /etc/hosts | awk '{print $2}' | sed -n '7,$p'))

    if [ "$Option" = "" ]; then
        exit
    fi

    pkexec sh -c "sed -i $(($(grep -n $Option /etc/hosts | sed 's/:/ /g' | awk '{print $1}')))d /etc/hosts && systemctl restart NetworkManager"
}

function showBlockedSites {
    zenity --list --title="Blocked Sites" \
    --column="Sites" --ok-label "Add" --hide-header \
    $(cat /etc/hosts | awk '{print $2}' | sed -n '7,$p')

    case $? in
        0) addSite ;;
        *) exit ;;
    esac
}

main=$(zenity --info --title="Web Private" --text="Welcome to Web Private" --ok-label Add --extra-button Remove)
conditional=$?

if [ $conditional == 0 ]; then
    addSite
fi

if [ $conditional == 1 -a $main == "Remove" ]; then
    remove
fi

if [ $conditional == 1 ]; then
    exit
fi
