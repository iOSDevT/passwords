//
// Created by Neil on 20/03/2014.
// Copyright (c) 2014 MeasuredSoftware. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface PasswordList : NSObject

@property(nonatomic, strong) NSMutableArray *passwordArray;

- (void)savePasswords;

- (NSUInteger)count;

- (NSString *)password:(NSUInteger)needle;

- (NSString *)label:(NSUInteger)index1;
@end