//
//  Jp_HelloWorldAppDelegate.h
//  Jp-HelloWorld
//
//  Created by labuser on 3/30/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Jp_HelloWorldViewController;

@interface Jp_HelloWorldAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    Jp_HelloWorldViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet Jp_HelloWorldViewController *viewController;

@end

