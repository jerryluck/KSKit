#!/bin/sh
echo -n "enter the version: "
read version

echo -e "\033[32mthe version is: "$version"\033[0m"
echo -e "\033[32mgit add -A && git commit -m "'"'$version'"'"\033[0m"
git add -A && git commit -m '"'$version'"'
echo -e "\033[32mgit tag ""'"$version"'""\033[0m"
git tag "'"$version"'"

echo -e "\033[33mgit push --tags\033[0m"
git push --tags
echo -e "\033[33mgit push origin master\033[0m"
git push origin master
echo -e "\033[32mset the new version to "$version"\033[0m"
set the new version to $version
echo -e "\033[32mset the new tag to "$version"\033[0m"
set the new tag to $version
echo  -e "\033[33mpush to pod trunk host...\033[0m"
echo -e "\033[32mpod trunk push KSKit.podspec --verbose\033[0m"
pod trunk push KSKit.podspec --verbose
echo -e "\033[33msetup pod\033[0m"
pod setup
echo -e "\033[33m结束\033[0m"