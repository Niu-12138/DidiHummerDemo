//
//  AppDelegate.m
//  DidiHummerDemo
//

#import "AppDelegate.h"
#import <Hummer/Hummer.h>

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
  // Override point for customization after application launch.
  
  [Hummer startEngine:nil];
  return YES;
}

@end
