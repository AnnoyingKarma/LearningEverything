import 'package:flutter/material.dart';
import 'package:learn_flutter/views/home_view.dart';

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: "Learn flutter",
      home: HomeView(),
    );
  }
}