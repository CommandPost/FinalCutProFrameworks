//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewControllerGroup.h"

@class NSView;

@interface OZFxPlugCustomParameterController : OZViewControllerGroup
{
    NSView *_customView;
    NSView *_viewBridgeView;
}

+     // Error parsing type: c24@0:8^{OZFxPlugSharedBase=^^?@@@^v@@@@@@@@@@@@@@@{PCString=^{__CFString}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}BB{atomic<bool>=AB}BBBiBBBBB^{OZChannelBase}BA@BBQBQ{PCMutex=^^?{_opaque_pthread_mutex_t=q[56c]}}I}16, name: needsViewBridgeView:
+ (BOOL)shouldDisplayReset;
+ (BOOL)shouldDisplayAnimIndicator;
@property(readonly, nonatomic) NSView *customView; // @synthesize customView=_customView;
- (float)suggestedMaxParamWidth;
- (void)update;
- (void)_subviewsNeedDisplay:(id)arg1;
- (id)plugin;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end

