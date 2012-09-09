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
	NSMutableArray *imageViews;
}

@property (nonatomic,retain) IBOutlet UIButton *button;

- (IBAction)showNext:(id)sender;

@end
