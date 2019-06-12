(* 
* The thing that we need to know is, there's no such thing as reassignment.
* The dynamic environment just shadows your value into a new one.
* So the past references are just values that referenced an old value!
* Of course SML did this for convenience, but obviously Scala,
* just makes a compile error where val can't reassign. 
* *)

val a = 10

(* a : int, a -> 10 *)

val b = a * 2

(* b -> 20 *)

val a = 5 (* this is not an assignment statement *)

(* a -> 5, b -> 20 *)

val c = b

(* a -> 5, b -> 20, c -> 20 *)

val d = a

(* ..., d -> 5 *)

val a = a + 1

(* ..., a -> 6 *)

val f = a * 2

(* f -> 12 *)
