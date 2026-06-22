#!/bin/bash
VariableAsk() {
  read -p "$1" data
  case $data in
  "")
    local DATA=$2
    echo $DATA
    ;;
  *)
    if $data >0 >/dev/null 2>&1 && $data <$3 >/dev/null 2>&1; then
      local DATA=$data
      echo $DATA
      echo '\n'
    else
      local DATA=$2
      echo $DATA
    fi
    ;;
  esac
}

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

echo "#define OBJ $(VariableAsk "Number of flying object ? (DEFAULT: 100)" 100 1000)" >>tmp
echo "#define R_OBJ $(VariableAsk "Radius of each flying object ? (DEFAULT: 2)" 2 100)" >>tmp
echo "#define MASS_OBJ $(VariableAsk "Number of flying object ? (DEFAULT: 10)" 10 10000)" >>tmp
echo "#define XSPEED_OBJ $(VariableAsk "Number of flying object ? (DEFAULT: 10)" 10 10000)" >>tmp
echo "#define YSPEED_OBJ $(VariableAsk "Number of flying object ? (DEFAULT: 0)" 0 10000)" >>tmp
echo "#define BODY $(VariableAsk "Number of flying object ? (DEFAULT: 2)" 2 2)" >>tmp
echo "#define MASS1 $(VariableAsk "Number of flying object ? (DEFAULT: 100)" 100 10000)" >>tmp
echo "#define MASS2 $(VariableAsk "Number of flying object ? (DEFAULT: 500)" 500 10000)" >>tmp
echo "#define G $(VariableAsk "Number of flying object ? (DEFAULT: 0.6)" 0.6 10000)" >>tmp
echo "#define L_TRAIL $(VariableAsk "Number of flying object ? (DEFAULT: 250)" 250 10000)" >>tmp

mv tmp Files/Variables.h

read -p "Ready ?(Y/n) :" launch

case $launch in
y)
  make -C Files/
  rm 0
  rm Files/Variables.h
  ;;
n)
  rm 0
  rm Files/Variables.h
  clear
  exit
  ;;
*)
  make -C Files/
  rm 0
  rm Files/Variables.h
  ;;
esac
