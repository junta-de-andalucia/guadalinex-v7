%
% include before common.inc
%

% - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
% ( timeout time ) ==> ( )
/Timeout {
  /timeout.time exch def
  /timeout.timeout exch def

  timeout.time 10 mul 150 add 182 div /timeout.seconds exch def

  timeout.seconds timeout.current eq { return } if
  /timeout.current timeout.seconds def

  white setcolor

  timeout.time.x timeout.time.y moveto -30 0 rmoveto
  currentpoint 30 fontheight image

  timeout.time 0 gt {
    timeout.seconds "%ds" timeout.buf sprintf

    timeout.time.x timeout.time.y moveto timeout.buf showright
  } if
} def


% - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
% Initialize timeout indicator.
%
% ( ) ==> ( )
%
/timeout.init {
  /timeout.current    -1 def
  /timeout.buf        64 string def

  /timeout.time.x timeout.x 60 add def
  /timeout.time.y timeout.y 120 add def
} def


/timeout.x { head.x } def
/timeout.y { head.y } def

