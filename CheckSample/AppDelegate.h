//
//  AppDelegate.h
//  CheckSample
//
//  Created by Srikanth  on 28/02/18.
//  Copyright © 2018 Srikanth . All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

