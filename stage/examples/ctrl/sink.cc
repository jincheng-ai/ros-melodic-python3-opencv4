#include "stage.hh"
using namespace Stg;

unsigned int total = 0;

int Delivery(Model *, void *)
{
  total++;

  /**
 printf( "Delivery: %.2f %d %.2f %.2f\n",
  mod->GetWorld()->SimTimeNow() / 1e6,
  //mod->GetFlagCount(),
  total,
//	dynamic_cast<WorldGui*>(mod->GetWorld())->EnergyString().c_str() );

          Stg::PowerPack::global_input / 1e3,
          Stg::PowerPack::global_dissipated / 1e3 );
  */

  return 0; // run again
}

// Stage calls this when the model starts up
extern "C" int Init(Model *mod)
{
  puts("Starting sink controller");

  // attach callback to be called whenever a flag is added to the sink model
  mod->AddCallback(Model::CB_FLAGINCR, (model_callback_t)Delivery, NULL);
  mod->Subscribe();
  return 0; // ok
}
