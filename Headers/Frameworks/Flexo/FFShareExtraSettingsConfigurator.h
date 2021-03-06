//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FFShareDataModel;
@protocol FFShareExtraSettingsConfiguratorDelegate;

__attribute__((visibility("hidden")))
@interface FFShareExtraSettingsConfigurator : NSObject
{
    id <FFShareExtraSettingsConfiguratorDelegate> _delegate;
    FFShareDataModel *_dataModel;
}

@property(retain, nonatomic) FFShareDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property id <FFShareExtraSettingsConfiguratorDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)configureExtraSettings:(char *)arg1 count:(unsigned long long)arg2 destinationURL:(id)arg3 libraryURL:(id)arg4 destination:(id)arg5;
- (void)dealloc;
- (id)init;

@end

