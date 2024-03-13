chmod u+x MathSuite_v1.01.linux
read -p "Executable has been made!"
read -p "Now run MathSuite.sh in the terminal with bash MathSuite.sh!"
read -p "Any key to exit...." -t 2
echo "rm -rf Setup.sh" >> MathSuite.sh
echo "./MathSuite_v1.01.linux" >> MathSuite.sh
chmod u+x MathSuite.sh
