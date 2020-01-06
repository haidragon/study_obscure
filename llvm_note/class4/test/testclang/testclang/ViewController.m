//
//  ViewController.m
//  testclang
//
//  Created by haidragon on 2020/1/5.
//  Copyright © 2020 haidragon. All rights reserved.
//

#import "ViewController.h"
#import "test_clang.h"
@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [test_clang test];
    // Do any additional setup after loading the view.
}


- (void)setRepresentedObject:(id)representedObject {
    [super setRepresentedObject:representedObject];

    // Update the view, if already loaded.
}


@end
