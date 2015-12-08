ifconfig | grep ether | sed 's:.*ether[ ]*::g;s/[ ]*$//g' | cat -e
