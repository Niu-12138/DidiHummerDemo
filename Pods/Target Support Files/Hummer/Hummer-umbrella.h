#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "HMCABasicAnimation.h"
#import "HMAnimationConverter.h"
#import "HMAnimationManager.h"
#import "HMAnimator.h"
#import "HMCAAnimation+Internal.h"
#import "HMCAAnimation.h"
#import "HMViewAnimation.h"
#import "CAAnimation+Exp.h"
#import "CAAnimation+Timing.h"
#import "HMAnimation.h"
#import "HMCAKeyframeAnimation.h"
#import "HMTransform.h"
#import "HMTransitionAnimation.h"
#import "HMTransitionAnimationConverter.h"
#import "UIView+HMAnimation.h"
#import "HMRootViewLifeCycle.h"
#import "HMViewController.h"
#import "HummerContainerProtocol.h"
#import "HMJSLoaderProtocol.h"
#import "HMMemoryComponent.h"
#import "HMRequestComponent.h"
#import "HMStorageProtocol.h"
#import "HMMemCache.h"
#import "HMNavigator.h"
#import "HMNavigatorPageInfo.h"
#import "HMNavigatorSchemes.h"
#import "HMPageBuilder.h"
#import "HMRequest.h"
#import "HMRequestCache.h"
#import "HMNotifyCenter.h"
#import "HMStorage.h"
#import "HMTimer.h"
#import "HMButton.h"
#import "HMCanvasView.h"
#import "HMCanvasByGraphicInternelView.h"
#import "HMCanvasDrawCommand.h"
#import "HMCanvasImplByCoreGraphic.h"
#import "HMCanvasViewInterface.h"
#import "HMGradientColor.h"
#import "HMDialog.h"
#import "HMAnimatedImage.h"
#import "HMImageLayer.h"
#import "HMImageView.h"
#import "HMAttributesBuilder.h"
#import "HMLabel.h"
#import "HMRecycleListView+CallJS.h"
#import "HMRecycleListView.h"
#import "HMRefreshBaseView.h"
#import "HMListLayoutAttributes.h"
#import "HMRecycleListViewGridLayout.h"
#import "HMRecycleListViewListLayout.h"
#import "HMRecycleListViewWaterfallLayout.h"
#import "HMWaterfallLayoutAttributes.h"
#import "HMActivityIndicatorView.h"
#import "HMScrollView.h"
#import "HMSwitch.h"
#import "HMTextArea.h"
#import "HMInput.h"
#import "HMToast.h"
#import "HMToastView.h"
#import "UIView+HMToast.h"
#import "HMAttributesItem.h"
#import "HMBorderModel.h"
#import "HMBorderModelCollection.h"
#import "HMCornerRadiusModel.h"
#import "HMTransformResolver.h"
#import "UIView+HMAttribute.h"
#import "UIView+HMDom.h"
#import "UIView+HMEvent.h"
#import "UIView+Hummer.h"
#import "HMViewPager.h"
#import "HMViewPagerCell.h"
#import "HMViewPagerLayout.h"
#import "HMViewPagerLayoutAnimator.h"
#import "HMViewPagerLayoutAttributes.h"
#import "HMViewPagerLayoutCardAnimator.h"
#import "HMViewPagerPageAnimator.h"
#import "HMWebSocket.h"
#import "HMDebug.h"
#import "HMJSContext+Private.h"
#import "HMJSContext+PrivateVariables.h"
#import "HMJSContext.h"
#import "HMJSContextDefines.h"
#import "HMJSGlobal+Private.h"
#import "HMJSGlobal.h"
#import "HMJSObject.h"
#import "JSValue+Hummer.h"
#import "NSObject+Hummer.h"
#import "HMEventTrackManager.h"
#import "HMEventTrackUtils.h"
#import "HMEventTrackViewProperty.h"
#import "UIView+HMEventTrack.h"
#import "HMBorderDrawing.h"
#import "HMView.h"
#import "HMYogaConfig.h"
#import "HMLayoutStyleProtocol.h"
#import "HMUIManager.h"
#import "HMCompatibleRenderObject.h"
#import "HMLayout.h"
#import "HMMeasureRenderObject.h"
#import "HMRenderObject.h"
#import "HMRootRenderObject.h"
#import "HMTextRenderObject.h"
#import "HMYogaUtility.h"
#import "UIView+HMRenderObject.h"
#import "HMAttrManager.h"
#import "HMFileManager.h"
#import "HMImageManager.h"
#import "HMViewManagerDTOModel.h"
#import "HMViewManagerLoader.h"
#import "HMImageCache.h"
#import "HMImageCacheManager.h"
#import "HMImageDiskCache.h"
#import "HMAnimatedImage+Hummer.h"
#import "HMImageCoderDefine.h"
#import "NSData+Hummer.h"
#import "NSURL+Hummer.h"
#import "UIImage+HMForceDecode.h"
#import "UIImage+HMMetadata.h"
#import "UIImage+HMMultiFormat.h"
#import "UIImage+Hummer.h"
#import "UIImageView+HMImageLoader.h"
#import "UIView+HMImageLoader.h"
#import "HMBase64ImageLoader.h"
#import "HMLocalImageLoader.h"
#import "HMWebImageLoader.h"
#import "HMImageAPNGCoder.h"
#import "HMGIFImageDecoder.h"
#import "HMImageFrame.h"
#import "HMImageIOAnimatedCoder+Internal.h"
#import "HMImageIOAnimatedCoder.h"
#import "HMImageIOCoder.h"
#import "HMWebpBuiltInImageCoder.h"
#import "HMWebPImageCoderDefine.h"
#import "HMImageCoder.h"
#import "HMImageCoderHelper.h"
#import "HMImageCoderManager.h"
#import "HMImageLoader.h"
#import "HMImageLoaderDefine.h"
#import "HMImageLoaderManager.h"
#import "HMURLConvertible.h"
#import "HMImageDownloadOperation.h"
#import "HMImageDownLoadToken.h"
#import "HMImageLoaderOperation.h"
#import "HummerWeakProxy.h"
#import "HMConvertibleProtocol.h"
#import "NSData+HMConvertible.h"
#import "NSError+Hummer.h"
#import "NSInvocation+Hummer.h"
#import "NSString+HMConvertible.h"
#import "NSString+Hummer.h"
#import "HMConfig.h"
#import "HMContainerModel.h"
#import "HMConverter.h"
#import "HMDefines.h"
#import "HMEncoding.h"
#import "HMJavaScriptLoader.h"
#import "HMLayoutUtils.h"
#import "HMLogger.h"
#import "HMReporter.h"
#import "HMSourceParser.h"
#import "HMUIUtility.h"
#import "HMURLUtility.h"
#import "HMUtility.h"
#import "WeakPointerWrapper.h"
#import "HMDebugService.h"
#import "HMDevGlobalWebSocket.h"
#import "HMDevService.h"
#import "HMDescription.h"
#import "HMViewInspector.h"
#import "NSObject+HMDescription.h"
#import "UIView+HMDescription.h"
#import "UIView+HMInspector.h"
#import "HMBaseExecutorProtocol.h"
#import "HMBaseValue.h"
#import "HMBaseWeakValueProtocol.h"
#import "HMExceptionModel.h"
#import "HMJSCExecutor+Internal.h"
#import "HMJSCExecutor+Private.h"
#import "HMJSCExecutor.h"
#import "HMJSCStrongValue.h"
#import "HMJSCWeakValue.h"
#import "Hummer.h"
#import "HMBaseEvent.h"
#import "HMLongPressEvent.h"
#import "HMPanEvent.h"
#import "HMPinchEvent.h"
#import "HMSwipeEvent.h"
#import "HMTapEvent.h"
#import "HMInputEvent.h"
#import "HMScrollEvent.h"
#import "HMSwitchEvent.h"
#import "HMExportBaseClass.h"
#import "HMExportClass.h"
#import "HMExportManager.h"
#import "HMExportMethod.h"
#import "HMExportProperty.h"
#import "HMEventTrackProtocol.h"
#import "HMFontProtocol.h"
#import "HMImageProtocol.h"
#import "HMInterceptor.h"
#import "HMJSCallerProtocol.h"
#import "HMLoggerProtocol.h"
#import "HMNetworkProtocol.h"
#import "HMPluginManager.h"
#import "HMReporterProtocol.h"
#import "HMRouterProtocol.h"
#import "HMWebImageProtocol.h"
#import "HMConfigEntryManager.h"
#import "HMNamespaceScope.h"
#import "HMUpgradeManager.h"

FOUNDATION_EXPORT double HummerVersionNumber;
FOUNDATION_EXPORT const unsigned char HummerVersionString[];
