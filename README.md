# NeuralNetMain
Skeleton neural network-- displays randomly sized neural net with random weights and a collection of functions.

<br>
<div align="center"> 
  <h2> Purpose: </h2>
  <h3> To display a contained but random neural net. </h3> 
</div>
That is, a neural network skeleton with arbitrary values and weights.
The "random" structure (# of layers and # of nodes per layer) is determined in the NeuralNetMain.cpp, whereas the actual code for the
structure is present in the other cpp/h files. I think this was a lesson in naming convention mostly and commenting (or a lack thereof).
I went trough a couple rounds of trying to name this structure and all components so I can make is as readable as possible but at the
end it is still tough to decipher... next time I think both solid commenting and more obvious naming would go a long way.

<br>
<div align="center"> 
  <h2> How to run: </h2>
  I did not provide an exe so one can clone this repo and then navigate to NeuralNet.cpp for majority of the code. NeuralNetMain.cpp
  acts as the driver. I tested this on Visual Studio 2015 and 2019.
</div>

<br>
<div align="center"> 
  <h2> Background: </h2>
  <h3> I employed a lot of RNG in this system and therefore the system does not look that random. </h3> 
</div>
This code was written late 2017 as a part of a project that fell through. I treated it as a learning experience throughout, however, so
I still got something out of it. I tried to make the system look very random so we can get a nice array (uhh) of results, but that
did not really occur. If you run the code a couple times, it is clear to see we get a [1,1,1,....1] set of
node values for the final layer A LOT of the time. I think this has to do with poor calibration of  random values and the functions we used. I need to randomize things,
but make sure it is RNG that fits the structure. The "squish" functions (3Blue1Brown quote) did not help either.
