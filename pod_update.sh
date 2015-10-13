#!/bin/sh
echo -n "enter the version: "
read version

echo  "the version is: "$version
git add -A && git commit -m '"'$version'"'
git tag '"'$version'"'
echo -e "\033[33mpush tag to git host...\033[0m"
git push --tags
echo -e "\033[33mpush commit to git host...\033[0m"
git push origin master
set the new version to $version
set the new tag to $version
echo  -e "\033[33mpush to pod trunk host...\033[0m"
pod trunk push KSKit.podspec
echo -e "\033[33m结束\033[0m"