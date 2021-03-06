//
//  BSNViewController.h
//  BlueBar iBeacon Demo
//
//  Created by Vladimir Petrov on 15/01/2014.
//  Copyright (c) 2014 Blue Sense Networks. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "NSMutableArray+QueueAdditions.h"

@interface BSNViewController : UIViewController

@property (strong, nonatomic) IBOutlet UIButton *offerDisplay;
@property (strong, nonatomic) CLBeaconRegion *beaconRegion;
@property (strong, nonatomic) CLLocationManager *locationManager;

@property (strong, nonatomic) NSMutableArray *filterBuffer;
@property NSInteger currentState;

- (IBAction)TouchUpInside:(id)sender;

@end
