#!/bin/bash

clear

echo "  ____  ____    ____  __ __  ____  ______   ____  ______  ____  ___   ____    ____  _      "
echo " /    ||    \  /    ||  |  ||    ||      | /    ||      ||    |/   \ |    \  /    || |     "
echo "|   __||  D  )|  o  ||  |  | |  | |      ||  o  ||      | |  ||     ||  _  ||  o  || |     "
echo "|  |  ||    / |     ||  |  | |  | |_|  |_||     ||_|  |_| |  ||  O  ||  |  ||     || |___  "
echo "|  |_ ||    \ |  _  ||  :  | |  |   |  |  |  _  |  |  |   |  ||     ||  |  ||  _  ||     | "
echo "|     ||  .  \|  |  | \   /  |  |   |  |  |  |  |  |  |   |  ||     ||  |  ||  |  ||     | "
echo "|___,_||__|\_||__|__|  \_/  |____|  |__|  |__|__|  |__|  |____|\___/ |__|__||__|__||_____| "
echo ""

sleep 1

echo "                        _____   ___   ____      __    ___  _____"
echo "                       |     | /   \ |    \    /  ]  /  _]/ ___/"
echo "                       |   __||     ||  D  )  /  /  /  [_(   \_ "
echo "                       |  |_  |  O  ||    /  /  /  |    _]\__  |"
echo "                       |   _] |     ||    \ /   \_ |   [_ /  \ |"
echo "                       |  |   |     ||  .  |\     ||     |\    |"
echo "                       |__|    \___/ |__|\_| \____||_____| \___|"
echo ""

sleep 1

echo "          _____ ____  ___ ___  __ __  _       ____  ______  ____  ___   ____  "
echo "         / ___/|    ||   |   ||  |  || |     /    ||      ||    |/   \ |    \ "
echo "        (   \_  |  | | _   _ ||  |  || |    |  o  ||      | |  ||     ||  _  |"
echo "         \__  | |  | |  \_/  ||  |  || |___ |     ||_|  |_| |  ||  O  ||  |  |"
echo "         /  \ | |  | |   |   ||  :  ||     ||  _  |  |  |   |  ||     ||  |  |"
echo "         \    | |  | |   |   ||     ||     ||  |  |  |  |   |  ||     ||  |  |"
echo "          \___||____||___|___| \__,_||_____||__|__|  |__|  |____|\___/ |__|__|"

sleep 2
clear

echo "To launch the simulation there is a number of variable that you can change."
echo "You'll be asked for each variable, if there's one that you wanna leave as default. DO NOT ENTER A VALUE"
echo ""
read -p "Number of flying object ? (DEFAULT: 100)" n_obj

read -p "Ready ?(Y/n) :" launch

case $launch in
y)
  make -C Files/
  ;;
n)
  clear
  exit
  ;;
*)
  make -C Files/
  ;;
esac
