chmod u+x MathSuite_v1.02.linux
read -p "Executable has been made!"
read -p "Now run MathSuite.sh in the terminal with bash .math"
read -p "Any key to exit...." -t 2
read -p " " -t 0
echo "rm -rf Setup.sh" >> MathSuite.sh
echo "./MathSuite_v1.02.linux" >> MathSuite.sh
chmod u+x MathSuite.sh
mv MathSuite.sh .math
