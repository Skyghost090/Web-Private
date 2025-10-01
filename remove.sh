function removeHostLine {
    if [[ $hostsLine -ge $((4)) ]]; then
        sed -i "$(printf $hostsLine)d" /etc/hosts
    fi
}

if [[ $1 != "" ]]; then
    backup=$(cat list.toml)
    line=$(cat list.toml | grep -n $1 | grep -n adress | tr ':#=' ' ' | awk '{print $2}')
    hostsLine=$(($(cat /etc/hosts | grep -n $1 | tr ':' ' ' | awk '{print $1}')))
    echo "line stored"
    sed -i "$(($line - 1)),$(($line + 3))d" list.toml
    if [[ $? != 0 ]]; then
        echo "$backup" > list.toml
    fi
    if [[ $(whoami) == "root" ]]; then
        removeHostLine
    fi
else
    echo "please set a parameter"
fi
