if [[ $1 != "" && $2 != "" && $3 != "" && $4 != "" ]]; then
    echo -e "$(cat list.toml)\n\n[[site]]\nadress = '$1'\nname = '$2'\ninitTime = $3\nendTime = $4" > list.toml
else
    echo "please set a parameter"
fi
