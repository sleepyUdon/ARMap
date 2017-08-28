// Generated by Apple Swift version 3.1 (swiftlang-802.0.53 clang-802.0.42)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if defined(__has_attribute) && __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import UIKit;
@import CoreGraphics;
@import CoreLocation;
@import Foundation;
@import MapKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class CLLocation;
@class ARAnnotationView;

/// Defines POI with title and location.
SWIFT_CLASS("_TtC10CBCNews_AR12ARAnnotation")
@interface ARAnnotation : NSObject
/// Title of annotation
@property (nonatomic, copy) NSString * _Nullable title;
/// Location of annotation
@property (nonatomic, strong) CLLocation * _Nullable location;
/// View for annotation. It is set inside ARViewController after fetching view from dataSource.
@property (nonatomic, strong) ARAnnotationView * _Nullable annotationView;
@property (nonatomic) double distanceFromUser;
@property (nonatomic) double azimuth;
@property (nonatomic) NSInteger verticalLevel;
@property (nonatomic) BOOL active;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSCoder;

/// View for annotation. Subclass to customize. Annotation views should be lightweight,
/// try to avoid xibs and autolayout.
/// bindUi method is called when distance/azimuth is set in ARViewController.
SWIFT_CLASS("_TtC10CBCNews_AR16ARAnnotationView")
@interface ARAnnotationView : UIView
@property (nonatomic, weak) ARAnnotation * _Nullable annotation;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (void)awakeFromNib;
/// Will always be called once, no need to call super
- (void)initialize;
/// Called when distance/azimuth changes, intended to be used in subclasses
- (void)bindUi;
@end

@class ARViewController;

/// DataSource provides the ARViewController with the information needed to display annotations.
SWIFT_PROTOCOL("_TtP10CBCNews_AR12ARDataSource_")
@protocol ARDataSource <NSObject>
/// Asks the data source to provide annotation view for annotation. Annotation view must be subclass of ARAnnotationView.
- (ARAnnotationView * _Nonnull)ar:(ARViewController * _Nonnull)arViewController viewForAnnotation:(ARAnnotation * _Nonnull)viewForAnnotation SWIFT_WARN_UNUSED_RESULT;
@optional
/// READ BEFORE IMPLEMENTING
/// ARViewController tracks user movement and shows/hides annotations accordingly. But if there is huge amount
/// of annotations or for some other reason annotations cannot be set all at once, this method can be used to
/// set annotations part by part.
/// Use ARViewController.trackingManager.reloadDistanceFilter to change how often this is called.
/// \param arViewController ARViewController instance
///
/// \param location Current location of the user
///
///
/// returns:
/// Annotations to load, previous annotations are removed
- (NSArray<ARAnnotation *> * _Nonnull)ar:(ARViewController * _Nonnull)arViewController shouldReloadWithLocation:(CLLocation * _Nonnull)location SWIFT_WARN_UNUSED_RESULT;
@end

@class CLLocationManager;
@protocol ARTrackingManagerDelegate;
@class CLHeading;

/// Class used internally by ARViewController for location and orientation calculations.
SWIFT_CLASS("_TtC10CBCNews_AR17ARTrackingManager")
@interface ARTrackingManager : NSObject <CLLocationManagerDelegate>
/// Defines whether altitude is taken into account when calculating distances. Set this to false if your annotations
/// don’t have altitude values. Note that this is only used for distance calculation, it doesn’t have effect on vertical
/// levels of annotations. Default value is false.
@property (nonatomic) BOOL altitudeSensitive;
@property (nonatomic, readonly, strong) CLLocationManager * _Nonnull locationManager;
@property (nonatomic, readonly) BOOL tracking;
@property (nonatomic, readonly, strong) CLLocation * _Nullable userLocation;
@property (nonatomic, readonly) double heading;
@property (nonatomic, weak) id <ARTrackingManagerDelegate> _Nullable delegate;
@property (nonatomic) CLDeviceOrientation orientation;
@property (nonatomic, readonly) double pitch;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Starts location and motion manager
/// <ul>
///   <li>
///     Parameter: notifyFailure if true, will call arTrackingManager:didFailToFindLocationAfter:
///   </li>
/// </ul>
- (void)startTrackingWithNotifyLocationFailure:(BOOL)notifyLocationFailure;
/// Stops location and motion manager
- (void)stopTracking;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateHeading:(CLHeading * _Nonnull)newHeading;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateLocations:(NSArray<CLLocation *> * _Nonnull)locations;
- (void)reportLocationToDelegate;
- (double)calculatePitch SWIFT_WARN_UNUSED_RESULT;
- (double)azimuthFromUserToLocation:(CLLocation * _Nonnull)location SWIFT_WARN_UNUSED_RESULT;
- (void)startDebugMode:(CLLocation * _Nonnull)location;
- (void)stopDebugMode:(CLLocation * _Nonnull)location;
- (void)startLocationSearchTimerWithResetStartTime:(BOOL)resetStartTime;
- (void)stopLocationSearchTimerWithResetStartTime:(BOOL)resetStartTime;
- (void)locationSearchTimerTick;
@end


SWIFT_PROTOCOL("_TtP10CBCNews_AR25ARTrackingManagerDelegate_")
@protocol ARTrackingManagerDelegate <NSObject>
@optional
- (void)arTrackingManager:(ARTrackingManager * _Nonnull)trackingManager didUpdateUserLocation:(CLLocation * _Nullable)location;
- (void)arTrackingManager:(ARTrackingManager * _Nonnull)trackingManager didUpdateReloadLocation:(CLLocation * _Nullable)location;
- (void)arTrackingManager:(ARTrackingManager * _Nonnull)trackingManager didFailToFindLocationAfter:(NSTimeInterval)elapsedSeconds;
- (void)logText:(NSString * _Nonnull)text;
@end

@class UIImage;
@class NSBundle;
@protocol UIViewControllerTransitionCoordinator;

/// Augmented reality view controller.
/// How to use:
/// <ol>
///   <li>
///     Initialize controller and set datasource(and other properties if needed)
///   </li>
///   <li>
///     Use setAnnotations method to set annotations
///   </li>
///   <li>
///     Present controller modally
///   </li>
///   <li>
///     Implement ARDataSource to provide annotation views in your data source
///   </li>
/// </ol>
/// Properties maxVerticalLevel, maxVisibleAnnotations and maxDistance can be used to optimize performance.
/// Use trackingManager.userDistanceFilter and trackingManager.reloadDistanceFilter to set how often data is refreshed/reloaded.
/// All properties are documented.
/// https://github.com/DanijelHuis/HDAugmentedReality.git
SWIFT_CLASS("_TtC10CBCNews_AR16ARViewController")
@interface ARViewController : UIViewController <ARTrackingManagerDelegate>
/// Data source
@property (nonatomic, weak) id <ARDataSource> _Nullable dataSource;
/// Orientation mask for view controller. Make sure orientations are enabled in project settings also.
@property (nonatomic) UIInterfaceOrientationMask interfaceOrientationMask;
/// Defines in how many vertical levels can annotations be stacked. Default value is 5.
/// Annotations are initially vertically arranged by distance from user, but if two annotations visibly collide with each other,
/// then farther annotation is put higher, meaning it is moved onto next vertical level. If annotation is moved onto level higher
/// than this value, it will not be visible.
/// NOTE: This property greatly impacts performance because collision detection is heavy operation, use it in range 1-10.
/// Max value is 10.
@property (nonatomic) NSInteger maxVerticalLevel;
/// Total maximum number of visible annotation views. Default value is 100. Max value is 500
@property (nonatomic) NSInteger maxVisibleAnnotations;
/// Maximum distance(in meters) for annotation to be shown.
/// If the distance from annotation to user’s location is greater than this value, than that annotation will not be shown.
/// Also, this property, in conjunction with maxVerticalLevel, defines how are annotations aligned vertically. Meaning
/// annotation that are closer to this value will be higher.
/// Default value is 0 meters, which means that distances of annotations don’t affect their visiblity.
@property (nonatomic) double maxDistance;
/// Class for managing geographical calculations. Use it to set properties like reloadDistanceFilter, userDistanceFilter and altitudeSensitive
@property (nonatomic, readonly, strong) ARTrackingManager * _Nonnull trackingManager;
@property (nonatomic, strong) UIImage * _Nullable closeButtonImage;
/// Enables map debugging and some other debugging features, set before controller is shown
@property (nonatomic) BOOL debugEnabled;
/// Smoothing factor for heading in range 0-1. It affects horizontal movement of annotaion views. The lower the value the bigger the smoothing.
/// Value of 1 means no smoothing, should be greater than 0.
@property (nonatomic) double headingSmoothingFactor;
/// Called every 5 seconds after location tracking is started but failed to deliver location. It is also called when tracking has just started with timeElapsed = 0.
/// The timer is restarted when app comes from background or on didAppear.
@property (nonatomic, copy) void (^ _Nullable onDidFailToFindLocation)(NSTimeInterval, BOOL);
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (void)initializeInternal;
/// Intended for use in subclasses, no need to call super
- (void)initialize;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
- (void)viewDidLayoutSubviews;
- (void)closeButtonTap;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
- (void)appDidEnterBackground:(NSNotification * _Nonnull)notification;
- (void)appWillEnterForeground:(NSNotification * _Nonnull)notification;
/// Sets annotations. Note that annotations with invalid location will be kicked.
/// \param annotations Annotations
///
- (void)setAnnotations:(NSArray<ARAnnotation *> * _Nonnull)annotations;
- (NSArray<ARAnnotation *> * _Nonnull)getAnnotations SWIFT_WARN_UNUSED_RESULT;
/// Creates annotations views and recalculates all variables(distances, azimuths, vertical levels) if user location is available, else it will reload when it gets user location.
- (void)reloadAnnotations;
- (void)displayTimerTick;
- (void)arTrackingManager:(ARTrackingManager * _Nonnull)trackingManager didUpdateUserLocation:(CLLocation * _Nullable)didUpdateUserLocation;
- (void)arTrackingManager:(ARTrackingManager * _Nonnull)trackingManager didUpdateReloadLocation:(CLLocation * _Nullable)didUpdateReloadLocation;
- (void)arTrackingManager:(ARTrackingManager * _Nonnull)trackingManager didFailToFindLocationAfter:(NSTimeInterval)elapsedSeconds;
- (void)logText:(NSString * _Nonnull)text;
@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator> _Nonnull)coordinator;
- (void)layoutAndReloadOnOrientationChange;
- (void)addCloseButton;
/// Called from DebugMapViewController when user fakes location.
- (void)locationNotification:(NSNotification * _Nonnull)sender;
/// Opening DebugMapViewController
- (void)debugButtonTap;
- (void)addDebugUi;
@end

@class UIWindow;
@class UIApplication;

SWIFT_CLASS("_TtC10CBCNews_AR11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions SWIFT_WARN_UNUSED_RESULT;
- (void)applicationWillResignActive:(UIApplication * _Nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * _Nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * _Nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * _Nonnull)application;
- (void)applicationWillTerminate:(UIApplication * _Nonnull)application;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImageView;
@class UILabel;

SWIFT_CLASS("_TtC10CBCNews_AR17CustomCalloutView")
@interface CustomCalloutView : UIView
@property (nonatomic, strong) IBOutlet UIImageView * _Null_unspecified storyImage;
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified storyTitle;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class MKMapView;
@class UILongPressGestureRecognizer;

/// Called from ARViewController for debugging purposes
SWIFT_CLASS("_TtC10CBCNews_AR22DebugMapViewController")
@interface DebugMapViewController : UIViewController <MKMapViewDelegate, CLLocationManagerDelegate>
@property (nonatomic, weak) IBOutlet MKMapView * _Null_unspecified mapView;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
- (void)addAnnotations:(NSArray<ARAnnotation *> * _Nonnull)annotations;
- (IBAction)longTap:(UILongPressGestureRecognizer * _Nonnull)sender;
- (IBAction)closeButtonTap:(id _Nonnull)sender;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateHeading:(CLHeading * _Nonnull)newHeading;
- (void)mapView:(MKMapView * _Nonnull)mapView regionWillChangeAnimated:(BOOL)animated;
- (void)mapView:(MKMapView * _Nonnull)mapView regionDidChangeAnimated:(BOOL)animated;
@end


SWIFT_CLASS("_TtC10CBCNews_AR15StoryAnnotation")
@interface StoryAnnotation : NSObject <MKAnnotation>
@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;
@property (nonatomic, readonly, copy) NSString * _Nullable title;
@property (nonatomic, copy) NSString * _Nonnull storyPublishedDate;
@property (nonatomic, copy) NSString * _Nullable storyImage;
- (nonnull instancetype)initWithStoryLocation:(CLLocationCoordinate2D)storyLocation storyImage:(NSString * _Nonnull)storyImage storyPublishedDate:(NSString * _Nonnull)storyPublishedDate storyHashtag:(NSString * _Nonnull)storyHashtag OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class UIEvent;

SWIFT_CLASS("_TtC10CBCNews_AR19StoryAnnotationView")
@interface StoryAnnotationView : MKAnnotationView
@property (nonatomic, strong) UILabel * _Nullable titleLabel;
@property (nonatomic, strong) UILabel * _Nullable distanceLabel;
- (UIView * _Nullable)hitTest:(CGPoint)point withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithAnnotation:(id <MKAnnotation> _Nullable)annotation reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10CBCNews_AR14ViewController")
@interface ViewController : UIViewController
@property (nonatomic, weak) IBOutlet MKMapView * _Null_unspecified mapView;
@property (nonatomic, strong) ARViewController * _Null_unspecified arViewController;
@property (nonatomic) BOOL startedLoadingPOIs;
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface ViewController (SWIFT_EXTENSION(CBCNews_AR)) <CLLocationManagerDelegate>
- (BOOL)locationManagerShouldDisplayHeadingCalibration:(CLLocationManager * _Nonnull)manager SWIFT_WARN_UNUSED_RESULT;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateLocations:(NSArray<CLLocation *> * _Nonnull)locations;
@end

@class UIControl;

@interface ViewController (SWIFT_EXTENSION(CBCNews_AR)) <MKMapViewDelegate>
- (MKAnnotationView * _Nullable)mapView:(MKMapView * _Nonnull)mapView viewForAnnotation:(id <MKAnnotation> _Nonnull)annotation SWIFT_WARN_UNUSED_RESULT;
- (void)mapView:(MKMapView * _Nonnull)mapView annotationView:(MKAnnotationView * _Nonnull)view calloutAccessoryControlTapped:(UIControl * _Nonnull)control;
- (void)mapView:(MKMapView * _Nonnull)mapView didSelectAnnotationView:(MKAnnotationView * _Nonnull)view;
@end

#pragma clang diagnostic pop
