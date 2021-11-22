# AIRLINE TICKET RESERVATION SYSTEM
## Purpose
> The aim of this software is to develop a systematic analysis of the procedure involved in the 
reservation of tickets for air travel. This should be used in an effective way so that various advantages are
extracted from the software. Software means establishment of sound and in-depth development of a 
task using high-level language that results in well-equipped, economicalsoftware, which is reliable. The
introduction may be divided into varioussteps based on the developer and also depending upon the 
operation to be performed using the particularsoftware. The “AIRLINE RESERVATION SYSTEM”
undertakes as a project based on relevant technologies. The main aim of this project is to develop the 
software for the process of reserving airway tickets and should lead to increased efficiency and reduce
any prior drawbacks. The features deal with the different operationsinvolved in the process of AIRLINE
RESERVATION. 

## Scope
> This project designs and implements ARS to fulfill all the vision statements. Supported by a 
well- designed database, all available air flight information is integrated together and can be 
accessed easily through a single point. A friendly user interface is provided so that various
combinations of search criteria can be fetched from user and generates corresponding database search
statements. AFRS provides both customer and administration interfaces with the latter used for
administration purposes. If time permits, ARS will support frequent user registration and personal
information management.

## Overview
ARS is a Windows console application executed locally on a user’s computer. ARS accepts and
processes requests from end- users (customers). Besides the local server database (for storing
reservation records), ARS also integrates databasesfrom airlines and airports.
The system is expected to have a graphical user interface for customers. Its final release has
merits of being efficient and precise in flight searching, consistent in booking transaction 
processing and secure in credential data transmission.

## System Overview
### REQUIREMENT ANALYSIS
> Requirements are prone to issues of the ambiguity, incompleteness and inconsistency techniques such as
rigorousinspection have been shown to help deal with these issues.
Ambiguity, incompleteness and inconsistenciesthat can be resolved in the requirement phase typically
cost orders of magnitude less to correct as opposed to these same issuesfound in laterstages of product 
development. The purpose of developing the specified software is to describe the analysisinvolved in the 
reservation of air ticket.
### FUNCTIONALANALYSIS
* Input: Collecting the information of the person who is going to travel. 
* Output: The issue of ticket on the particular date specified by the traveler.
### PROCESS
* Enterdetailsof the traveler.
* Check for availabilityoftickets.
* Inform the traveler the positionoftheavailableseat.
* Ask his/herdecisionwhether to reserve the ticket or not.
* Positive reply-book ticket afterreceiving the amountfor the costofticket.
* Issuetheticket.
* Ask the traveler to check in time so that he/she doesn’tmiss the plan because of delay.
* Update the database before the next booking is to bedone.
### PROPOSEDSYSTEM
The main implementation requirements for this project are
* The client tier must not be changed, which means that the format of all the
communication messages have to be preserved.
* Some functionality, like check digit validation, time,stamps etc.
* Are supplied by already existing routines which we are obliged to use.
* The format of communication in modules are fixed and non-changeable.
* All the technical documentation formats are also fixed and have to be followed.
* Some customer implementation techniques have to be followed.
* A facility for viewing the single passenger record is made available.
* We have made concession in ticket fair for senior citizens
### System Features
* Flight Details – The user begins by entering the specifics of their journey, such as the source, destination, date,
number of passengers, and time, into this section.
* Check availability – Based on the information provided by the user in module 1, this module is used to check the
availability of flights.
* Book Ticket – After checking the availability of tickets on the flights, this module is used for booking the ticket.
* Cancellation – The customer uses this module to cancel their reservation. The customer inputs the unique ID
that was given to them during the reservation process. They can then cancel their reservation using this ID.

## Architecture Design
### ER Diagram

![Capture](https://user-images.githubusercontent.com/89790414/142877556-eb6b0c2e-0616-454a-b076-0e547d3e9196.PNG)


## Data Design
> This section describes the category of data required by the system. Because there is no actual
complete data set available for use, we will produce the needed data synthetically. This data will be 
more formally represented in our entity relational design data model. 

### Data Description
* A List of Airportsincluding:
  * Airport Name o Abbreviation 
    * Location
    *  City 
    *  State
    *  zip code (If possible)
    *  Time zone
* The information aboutseveral Flights, more specifically:
  * Flight id
  *  Airline
  * Flight number
  * Departure/ArrivalDate/Time o Departure/DestinationAirport o Seats
  * Total / Vacant
  * Seats Number 
  * First Seats
  * Coach Seats 
  * Type plane 
  * Fare
* Information of Reservations made:
  * Flightsid
  * Email
  * Passenger names
  * Credit card type/number
  * Address
  * Total Price
* User Information, most importantly containing:
  * Email
  * Password
  * Reservations

| Req #   | Description |
| ------- | ----------- |
| REQ-SR1 | The database backend system in text file. |
| REQ-SR2 | The Front-end and middle logic will be written using C++ |

> Thanks
---
