//
//  RZLUIViewHierarchy.h
//  PictureView
//
//  Created by 凌 钟 on 12-9-9.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#ifndef PictureView_RZLUIViewHierarchy_h
#define PictureView_RZLUIViewHierarchy_h

#define M_UI_bringToFront(x) [x.superview bringSubviewToFront:x]

#define M_UI_getSubviewIndex(x) [x.superview.subviews indexOfObject:x]

#define M_UI_sentToBack(x) [x.superview sendSubviewToBack:x]

#define M_UI_setLevel(x,y) [x.superview exchangeSubviewAtIndex:0 withSubviewAtIndex:y]

#define M_UI_isInFront(x) ([x.superview.subviews lastObject]== x )

#define M_UI_isAtBack(x)  ([x.superview.subviews objectAtIndex:0]== x )

#define M_UI_swapWithView(x,y,z) [x.superview exchangeSubviewAtIndex:y withSubviewAtIndex:z];

#endif
