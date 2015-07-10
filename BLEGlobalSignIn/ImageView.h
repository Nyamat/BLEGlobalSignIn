//
//  ImageView.h
//  BLEGlobalSignIn
//
//  Created by Nyamat on 09/07/15.
//  Copyright (c) 2015 SMART Cloud Computing. All rights reserved.
//


#import <UIKit/UIKit.h>

// TAG used in our custom table view cell to retreive this view
#define IMAGE_VIEW_TAG (100)

@class Transcript;

@interface ImageView : UIView

@property (nonatomic, assign) Transcript *transcript;

// Class method for computing a view height based on a given message transcript
+ (CGFloat)viewHeightForTranscript:(Transcript *)transcript;

@end
