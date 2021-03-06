//
//  ModelController.h
//  Boys and Girls Club of Pasadena
//
//  Created by Zach Kaufman on 8/25/15.
//  Copyright (c) 2015 Zach Kaufman. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

