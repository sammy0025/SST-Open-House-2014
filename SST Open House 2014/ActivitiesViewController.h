//
//  ActivitiesViewController.h
//  Open House
//
//  Created by Pan Ziyue on 18/5/14.
//  Copyright (c) 2014 Cyber Inc & StatiX Industries. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ActivitiesViewController : UIViewController

@property (strong, nonatomic) IBOutletCollection(UIButton) NSArray *buttons;

- (IBAction)buttonTapped:(id)sender;
- (IBAction)goBack:(id)sender;

@end
