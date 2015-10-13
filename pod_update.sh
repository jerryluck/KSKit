#!/bin/sh
echo -n "enter the version: "
read version

git add -A && git commit -m '"'$version'"'
git tag '"'$version'"'
git push --tags
git push origin master
set the new version to $version
set the new tag to $version
pod trunk push KSKit.podspec