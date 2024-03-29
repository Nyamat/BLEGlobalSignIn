//
//  MessageView.h
//  BLEGlobalSignIn
//
//  Created by Nyamat on 09/07/15.
//  Copyright (c) 2015 SMART Cloud Computing. All rights reserved.
//


#import <UIKit/UIKit.h>

@class Transcript;

// TAG used in our custom table view cell to retreive this view
#define MESSAGE_VIEW_TAG (99)

@interface MessageView : UIView

@property (nonatomic, assign) Transcript *transcript;

// Class method for computing a view height based on a given message transcript
+ (CGFloat)viewHeightForTranscript:(Transcript *)transcript;

@end
