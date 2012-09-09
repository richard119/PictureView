//
//  RZLViewController.m
//  PictureView
//
//  Created by 凌 钟 on 12-9-9.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import "RZLViewController.h"
#import "RZLUIViewHierarchy.h"

@interface RZLViewController ()

@end

@implementation RZLViewController

@synthesize button;

- (IBAction)showNext:(id)sender{

//    UIImageView *view = nil;
//	for(view in imageViews){
//		if([view isInFront]){
//			[view sentToBack];
//			break;
//		}
//	} 	
    
    UIImageView *viewImg = nil;
    for(viewImg in imageViews){
        if ( M_UI_isInFront(viewImg)) {
            M_UI_sentToBack(viewImg);
        }
    
    }
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    
	self.view.backgroundColor  = [UIColor clearColor];
    
    UIView *newView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 320, 420)];
    
    [self.view addSubview:newView];
    
	imageViews = [[NSMutableArray alloc] initWithCapacity:5];	
	for(int i = 1; i< 6; i++){	
		NSString *name = [NSString stringWithFormat:@"apple-ipad-background-%d.jpg",i];
		UIImage *image = [UIImage imageNamed:name];
		UIImageView *imageView = [[UIImageView alloc] initWithImage:image];
		imageView.frame = [[UIScreen mainScreen] bounds];
		[imageViews addObject:imageView];	
		[newView addSubview:imageView];
	}
    
    [self.view bringSubviewToFront:button];
  
}

- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    return (interfaceOrientation != UIInterfaceOrientationPortraitUpsideDown);
}

@end
