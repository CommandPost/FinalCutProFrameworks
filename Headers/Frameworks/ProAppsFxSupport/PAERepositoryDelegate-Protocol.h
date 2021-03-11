//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProAppsFxSupport/NSObject-Protocol.h>

@class PAERepository;
@protocol PAERepositoryItem;

@protocol PAERepositoryDelegate <NSObject>

@optional
- (void)repository:(PAERepository *)arg1 didMoveItem:(id <PAERepositoryItem>)arg2 toItem:(id <PAERepositoryItem>)arg3;
- (void)repository:(PAERepository *)arg1 didChangeItem:(id <PAERepositoryItem>)arg2;
- (void)repository:(PAERepository *)arg1 willRemoveItem:(id <PAERepositoryItem>)arg2;
- (void)repository:(PAERepository *)arg1 didAddItem:(id <PAERepositoryItem>)arg2;
- (void)repositoryContentsDidChange:(PAERepository *)arg1;
- (void)repositoryContentsWillChange:(PAERepository *)arg1;
@end

