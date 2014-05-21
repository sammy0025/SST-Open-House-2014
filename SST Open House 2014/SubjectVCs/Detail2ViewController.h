//
//  Detail2ViewController.h
//  Open House
//
//  Created by Pan Ziyue on 21/5/14.
//  Copyright (c) 2014 Cyber Inc & StatiX Industries. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Detail2ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UITextView *textView;
@property (weak, nonatomic) IBOutlet UISegmentedControl *segmentedCtrlData;

@property (nonatomic) NSUInteger identifier;

- (IBAction)segmentedCtrl:(id)sender;

@end
