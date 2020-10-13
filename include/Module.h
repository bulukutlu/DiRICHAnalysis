#ifndef MODULE_H
#define MODULE_H

#include "Fiber.h"

/// The Module class represents the whole module. 
/// It has a vector member holding 256 Fiber Objects (whole module).

class Module
{
 public:
  Module() = default;
  Module(const Module &module);
  virtual ~Module();

  /// add a signal to the module
  void addSignal(Signal &signal);

  /// get the overall number of signals in the module
  Float_t getNSignals();

  /// get the number of fibers that have a signal
  Int_t   getNFibers();

 private:

 	std::vector<Fiber>  mFibers{256}; ///< holds all fibers of the module

	ClassDef(Module,1);
};

#endif