module.exports = {
  dependency: {
    platforms: {
      ios: {},
      android: {
        packageInstance: 'new AppCenterReactNativeAnalyticsPackage(getApplication(),"ASK_JAVASCRIPT")'
      }
    }
  }
};
