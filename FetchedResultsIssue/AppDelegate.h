//
//  AppDelegate.h
//  FetchedResultsIssue
//
//  Created by Cornelis A Kruger on 2016/10/12.
//  Copyright © 2016 Test. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

