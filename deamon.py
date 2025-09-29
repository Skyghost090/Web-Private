import toml, time, os

with open("list.toml", "r+") as file_:
    config = toml.load(file_)

def verifyTime(site):
    if time.localtime().tm_hour > site['initTime'] and time.localtime().tm_hour < site['endTime'] or time.localtime().tm_hour == site['initTime'] and time.localtime().tm_hour == site['endTime']:
        os.system("cat /etc/hosts | grep {};[ $? != 0 ] && echo '127.0.0.1       {}' >> /etc/hosts".format(site['adress'], site['adress']))
    else:
        os.system("sed -i '/{}/d' /etc/hosts".format(site['adress']))

def verifySites():
    for site in config['site']:
        print("time: {} initTime: {} endTime: {}".format(time.localtime().tm_hour, site['initTime'], site['endTime']))
        verifyTime(site)

while(1):
    time.sleep(1)
    verifySites()
