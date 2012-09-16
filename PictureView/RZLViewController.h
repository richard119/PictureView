//
//  RZLViewController.h
//  PictureView
//
//  Created by 凌 钟 on 12-9-9.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RZLViewController : UIViewController {
    UIButton *button;
//    UIImageView *imageApp;
	NSMutableArray *imageViews;
}

@property (nonatomic,retain) IBOutlet UIButton *button;

@property (weak, nonatomic) IBOutlet UIImageView *imageApp;

@property (weak, nonatomic) IBOutlet UIView *subView;

- (IBAction)showNext:(id)sender;

- (IBAction)handlePan:(UIPanGestureRecognizer *)recognizer;

@end
