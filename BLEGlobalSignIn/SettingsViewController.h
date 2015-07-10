//
//  SettingsViewControllerDelegate.h
//  BLEGlobalSignIn
//
//  Created by Nyamat on 09/07/15.
//  Copyright (c) 2015 SMART Cloud Computing. All rights reserved.
//


#import <UIKit/UIKit.h>

@protocol SettingsViewControllerDelegate;

@interface SettingsViewController : UIViewController

@property (assign, nonatomic) id<SettingsViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *serviceType;

@end

@protocol SettingsViewControllerDelegate <NSObject>

- (void)controller:(SettingsViewController *)controller didCreateChatRoomWithDisplayName:(NSString *)displayName serviceType:(NSString *)serviceType;

@end
