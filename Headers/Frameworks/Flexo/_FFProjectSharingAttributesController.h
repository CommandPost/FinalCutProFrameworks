//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFInspectorLabelParameterCollapsableContainerController.h>

@class FFInspectorModuleProjectSharing;

__attribute__((visibility("hidden")))
@interface _FFProjectSharingAttributesController : FFInspectorLabelParameterCollapsableContainerController
{
    FFInspectorModuleProjectSharing *_delegate;
}

+ (Class)classForHeaderController;
@property(readonly, nonatomic) FFInspectorModuleProjectSharing *delegate; // @synthesize delegate=_delegate;
- (id)initWithDelegate:(id)arg1;

@end

