#!/bin/sh
echo -n "enter the version: "
read version

echo -e "\033[33mthe version is: "$version"\033[0m"
git add -A && git commit -m '"'$version'"'
git tag '"'$version'"'
echo -e "\033[33mpush tag to git host...\033[0m"
git push --tags
echo -e "\033[33mpush commit to git host...\033[0m"
echo -e "\033[33mgit push origin master\033[0m"
git push origin master
echo -e "\033[33mset the new version to {$version}\033[0m"
set the new version to $version
set the new tag to $version
echo  -e "\033[33mpush to pod trunk host...\033[0m"
pod trunk push KSKit.podspec
echo -e "\033[33msetup pod\033[0m"
pod setup
echo -e "\033[33m结束\033[0m"