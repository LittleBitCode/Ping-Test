//
//  ViewController.h
//  Ping++Test
//
//  Created by littleBit on 16/3/4.
//  Copyright © 2016年 littleBit. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIAlertViewDelegate, UITextFieldDelegate>
{
    UIAlertView* mAlert;
    UITextField *mTextField;
}

@property(nonatomic, retain)NSString *channel;
@property(nonatomic ,retain)UITextField *mTextField;

- (void)showAlertWait;
- (void)showAlertMessage:(NSString*)msg;
- (void)hideAlert;

@end
