//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/NSObject-Protocol.h>

@class FFColorLooksListItem, NSString;

@protocol FFColorLooksListDataSource <NSObject>
- (FFColorLooksListItem *)colorLooksListItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;

@optional
- (NSString *)uniqueFilePathForName:(NSString *)arg1;
- (NSString *)listPath;
@end

