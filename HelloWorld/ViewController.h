//
//  ViewController.h
//  HelloWorld
//
//  Copyright (c) 2013 NUS CS3217. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *textLabel;
- (IBAction)button_TouchUpInside:(id)sender;

@end