/*
    Fiona Burleson
    1/27/2022
    ACM Research Coding Challenge Spring 2022


*/

#include <iostream>
#include <stdio.h> 
#include <string>
#include <math.h>
#include <fstream>
#include <iomanip>
using namespace std;

void findCharacteristics(string line_);
void predictionChecking(string line_);

//cap-shape variables
double edibleBell = 0, posionousBell = 0, totalBell = 0;
double edibleConical = 0, posionousConical = 0, totalConical = 0;
double edibleConvex = 0, posionousConvex = 0, totalConvex = 0;
double edibleFlat = 0, posionousFlat = 0, totalFlat = 0;
double edibleKnobbed = 0, posionousKnobbed = 0, totalKnobbed = 0;
double edibleSunken = 0, posionousSunken = 0, totalSunken = 0;
//cap-surface variables
double edibleFibrous = 0, posionousFibrous = 0, totalFibrous = 0;
double edibleGrooves = 0, posionousGrooves = 0, totalGrooves = 0;
double edibleScaly = 0, posionousScaly = 0, totalScaly = 0;
double edibleSmooth = 0, posionousSmooth = 0, totalSmooth = 0;
//cap-color variables
double edibleBrown = 0, posionousBrown = 0, totalBrown = 0;
double edibleBuff = 0, posionousBuff = 0, totalBuff = 0;
double edibleCinnamon = 0, posionousCinnamon = 0, totalCinnamon = 0;
double edibleGray = 0, posionousGray = 0, totalGray = 0;
double edibleGreen = 0, posionousGreen = 0, totalGreen = 0;
double ediblePink = 0, posionousPink = 0, totalPink = 0;
double ediblePurple = 0, posionousPurple = 0, totalPurple = 0;
double edibleRed = 0, posionousRed = 0, totalRed = 0;
double edibleWhite = 0, posionousWhite = 0, totalWhite = 0;
double edibleYellow = 0, posionousYellow = 0, totalYellow = 0;
//bruises variables
double edibleBruises = 0, posionousBruises = 0, totalBruises = 0;
double edibleNo = 0, posionousNo = 0, totalNo = 0;
//odor variables
double edibleAlmond = 0, posionousAlmond = 0, totalAlmond = 0;
double edibleAnise = 0, posionousAnise = 0, totalAnise = 0;
double edibleCreosote = 0, posionousCreosote = 0, totalCreosote = 0;
double edibleFishy = 0, posionousFishy = 0, totalFishy = 0;
double edibleFoul = 0, posionousFoul = 0, totalFoul = 0;
double edibleMusty = 0, posionousMusty = 0, totalMusty = 0;
double edibleNone = 0, posionousNone = 0, totalNone = 0;
double ediblePungent = 0, posionousPungent = 0, totalPungent = 0;
double edibleSpicy = 0, posionousSpicy = 0, totalSpicy = 0;
//gill-attachment variables
double edibleAttached = 0, posionousAttached = 0, totalAttached = 0;
double edibleDescending = 0, posionousDescending = 0, totalDescending = 0;
double edibleFree = 0, posionousFree = 0, totalFree = 0;
double edibleNotched = 0, posionousNotched = 0, totalNotched = 0;
//gill-spacing variables
double edibleClose = 0, posionousClose = 0, totalClose = 0;
double edibleCrowded = 0, posionousCrowded = 0, totalCrowded = 0;
double edibleDistant = 0, posionousDistant = 0, totalDistant = 0;
//gill-size variables
double edibleBroad = 0, posionousBroad = 0, totalBroad = 0;
double edibleNarrow = 0, posionousNarrow = 0, totalNarrow = 0;
//gill-color variables
double edibleGillBlack = 0, posionousGillBlack = 0, totalGillBlack = 0;
double edibleGillBrown = 0, posionousGillBrown = 0, totalGillBrown = 0;
double edibleGillBuff = 0, posionousGillBuff = 0, totalGillBuff = 0;
double edibleGillChocolate = 0, posionousGillChocolate = 0, totalGillChocolate = 0;
double edibleGillGray = 0, posionousGillGray = 0, totalGillGray = 0;
double edibleGillGreen = 0, posionousGillGreen = 0, totalGillGreen = 0;
double edibleGillOrange = 0, posionousGillOrange = 0, totalGillOrange = 0;
double edibleGillPink = 0, posionousGillPink = 0, totalGillPink = 0;
double edibleGillPurple = 0, posionousGillPurple = 0, totalGillPurple = 0;
double edibleGillRed = 0, posionousGillRed = 0, totalGillRed = 0;
double edibleGillWhite = 0, posionousGillWhite = 0, totalGillWhite = 0;
double edibleGillYellow = 0, posionousGillYellow = 0, totalGillYellow = 0;
//stalk-shape variables
double edibleEnlarging = 0, posionousEnlarging = 0, totalEnlarging = 0;
double edibleTapering = 0, posionousTapering = 0, totalTapering = 0;
//stalk-root variables
double edibleBulbous = 0, posionousBulbous = 0, totalBulbous = 0;
double edibleClub = 0, posionousClub = 0, totalClub = 0;
double edibleCup = 0, posionousCup = 0, totalCup = 0;
double edibleEqual = 0, posionousEqual = 0, totalEqual = 0;
double edibleRhizomorphs = 0, posionousRhizomorphs = 0, totalRhizomorphs = 0;
double edibleRooted = 0, posionousRooted = 0, totalRooted = 0;
double edibleMissing = 0, posionousMissing = 0, totalMissing = 0;
//stalk-surface-above-ring variables
double edibleAboveFibrous = 0, posionousAboveFibrous = 0, totalAboveFibrous = 0;
double edibleAboveScaly = 0, posionousAboveScaly = 0, totalAboveScaly = 0;
double edibleAboveSilky = 0, posionousAboveSilky = 0, totalAboveSilky = 0;
double edibleAboveSmooth = 0, posionousAboveSmooth = 0, totalAboveSmooth = 0;
//stalk-surface-below-ring variables
double edibleBelowFibrous = 0, posionousBelowFibrous = 0, totalBelowFibrous = 0;
double edibleBelowScaly = 0, posionousBelowScaly = 0, totalBelowScaly = 0;
double edibleBelowSilky = 0, posionousBelowSilky = 0, totalBelowSilky = 0;
double edibleBelowSmooth = 0, posionousBelowSmooth = 0, totalBelowSmooth = 0;
//stalk-color-above-ring variables
double edibleAboveBrown = 0, posionousAboveBrown = 0, totalAboveBrown = 0;
double edibleAboveBuff = 0, posionousAboveBuff = 0, totalAboveBuff = 0;
double edibleAboveCinnamon = 0, posionousAboveCinnamon = 0, totalAboveCinnamon = 0;
double edibleAboveGray = 0, posionousAboveGray = 0, totalAboveGray = 0;
double edibleAboveOrange = 0, posionousAboveOrange = 0, totalAboveOrange = 0;
double edibleAbovePink = 0, posionousAbovePink = 0, totalAbovePink = 0;
double edibleAboveRed = 0, posionousAboveRed = 0, totalAboveRed = 0;
double edibleAboveWhite = 0, posionousAboveWhite = 0, totalAboveWhite = 0;
double edibleAboveYellow = 0, posionousAboveYellow = 0, totalAboveYellow = 0;
//stalk-color-below-ring variables
double edibleBelowBrown = 0, posionousBelowBrown = 0, totalBelowBrown = 0;
double edibleBelowBuff = 0, posionousBelowBuff = 0, totalBelowBuff = 0;
double edibleBelowCinnamon = 0, posionousBelowCinnamon = 0, totalBelowCinnamon = 0;
double edibleBelowGray = 0, posionousBelowGray = 0, totalBelowGray = 0;
double edibleBelowOrange = 0, posionousBelowOrange = 0, totalBelowOrange = 0;
double edibleBelowPink = 0, posionousBelowPink = 0, totalBelowPink = 0;
double edibleBelowRed = 0, posionousBelowRed = 0, totalBelowRed = 0;
double edibleBelowWhite = 0, posionousBelowWhite = 0, totalBelowWhite = 0;
double edibleBelowYellow = 0, posionousBelowYellow = 0, totalBelowYellow = 0;
//veil-type variables
double ediblePartial = 0, posionousPartial = 0, totalPartial = 0;
double edibleUniversal = 0, posionousUniversal = 0, totalUniversal = 0;
//veil-color variables
double edibleVeilBrown = 0, posionousVeilBrown = 0, totalVeilBrown = 0;
double edibleVeilOrange = 0, posionousVeilOrange = 0, totalVeilOrange = 0;
double edibleVeilWhite = 0, posionousVeilWhite = 0, totalVeilWhite = 0;
double edibleVeilYellow = 0, posionousVeilYellow = 0, totalVeilYellow = 0;
//ring-number variables
double edibleNumberNone = 0, posionousNumberNone = 0, totalNumberNone = 0;
double edibleNumberOne = 0, posionousNumberOne = 0, totalNumberOne = 0;
double edibleNumberTwo = 0, posionousNumberTwo = 0, totalNumberTwo = 0;
//ring-type variables
double edibleTypeCobwebby = 0, posionousTypeCobwebby = 0, totalTypeCobwebby = 0;
double edibleTypeEvanescent = 0, posionousTypeEvanescent = 0, totalTypeEvanescent = 0;
double edibleTypeFlaring = 0, posionousTypeFlaring = 0, totalTypeFlaring = 0;
double edibleTypeLarge = 0, posionousTypeLarge = 0, totalTypeLarge = 0;
double edibleTypeNone = 0, posionousTypeNone = 0, totalTypeNone = 0;
double edibleTypePendant = 0, posionousTypePendant = 0, totalTypePendant = 0;
double edibleTypeSheathing = 0, posionousTypeSheathing = 0, totalTypeSheathing = 0;
double edibleTypeZone = 0, posionousTypeZone = 0, totalTypeZone = 0;
//spore-print-color variables
double edibleSporeBlack = 0, posionousSporeBlack = 0, totalSporeBlack = 0;
double edibleSporeBrown = 0, posionousSporeBrown = 0, totalSporeBrown = 0;
double edibleSporeBuff = 0, posionousSporeBuff = 0, totalSporeBuff = 0;
double edibleSporeChocolate = 0, posionousSporeChocolate = 0, totalSporeChocolate = 0;
double edibleSporeGreen = 0, posionousSporeGreen = 0, totalSporeGreen = 0;
double edibleSporeOrange = 0, posionousSporeOrange = 0, totalSporeOrange = 0;
double edibleSporePurple = 0, posionousSporePurple = 0, totalSporePurple = 0;
double edibleSporeWhite = 0, posionousSporeWhite = 0, totalSporeWhite = 0;
double edibleSporeYellow = 0, posionousSporeYellow = 0, totalSporeYellow = 0;
//population variables
double edibleAbundant = 0, posionousAbundant = 0, totalAbundant = 0;
double edibleClustered = 0, posionousClustered = 0, totalClustered = 0;
double edibleNumerous = 0, posionousNumerous = 0, totalNumerous = 0;
double edibleScattered = 0, posionousScattered = 0, totalScattered = 0;
double edibleSeveral = 0, posionousSeveral = 0, totalSeveral = 0;
double edibleSolitary = 0, posionousSolitary = 0, totalSolitary = 0;
//habitat variables
double edibleGrasses = 0, posionousGrasses = 0, totalGrasses = 0;
double edibleLeaves = 0, posionousLeaves = 0, totalLeaves = 0;
double edibleMeadows = 0, posionousMeadows = 0, totalMeadows = 0;
double ediblePaths = 0, posionousPaths = 0, totalPaths = 0;
double edibleUrban = 0, posionousUrban = 0, totalUrban = 0;
double edibleWaste = 0, posionousWaste = 0, totalWaste = 0;
double edibleWoods = 0, posionousWoods = 0, totalWoods = 0;

int main()
{
    std::string line_;
    ifstream file_("mushrooms.txt");
    if (file_.is_open())
    {
        while (getline(file_, line_))
        {
            findCharacteristics(line_);
        }
        file_.close();
    }
    else
        cout << "File is not opening properly";

    cout << "cap-shape:" << endl;
    //cap shape variables

    cout << " b: " << edibleBell << " e to " << posionousBell << " p = ";
    if (edibleBell > posionousBell) {
        cout << std::setprecision(5) << (edibleBell / posionousBell) << endl;
        totalBell = edibleBell / posionousBell;
    }
    else {
        cout << std::setprecision(5) << -1.0 * (posionousBell / edibleBell) << endl;
        totalBell = -1.0 * (posionousBell / edibleBell);
    }
    cout << " c: " << edibleConical << " e to " << posionousConical << " p = ";
    if (edibleConical > posionousConical) {
        cout << std::setprecision(5) << edibleConical / posionousConical << endl;
        totalConical = edibleConical / posionousConical;
    }
    else {
        cout << std::setprecision(5) << std::fixed << -1.0000 * (posionousConical/edibleConical) << endl;
        totalConical = -1.0000 * (posionousConical/edibleConical);
    }
    cout << std::setprecision(0) << " x: " << edibleConvex << " e to " << posionousConvex << " p = ";
    if (edibleConvex > posionousConvex) {
        cout << std::setprecision(5) << edibleConvex / posionousConvex << endl;
        totalConvex = edibleConvex / posionousConvex;
    }
    else {
        cout << std::setprecision(5) << -1 * (posionousConvex / edibleConvex) << endl;
        totalConvex = -1 * (posionousConvex / edibleConvex);
    }
    cout << std::setprecision(0) << " f: " << edibleFlat << " e to " << posionousFlat << " p = ";
    if (edibleFlat > posionousFlat) {
        cout << std::setprecision(5) << edibleFlat / posionousFlat << endl;
        totalFlat = edibleFlat / posionousFlat;
    }
    else {
        cout << std::setprecision(5) << -1 * (posionousFlat / edibleFlat) << endl;
        totalFlat = -1 * (posionousFlat / edibleFlat);
    }
    cout << std::setprecision(0) << " k: " << edibleKnobbed << " e to " << posionousKnobbed << " p = ";
    if (edibleKnobbed > posionousKnobbed) {
        cout << std::setprecision(5) << edibleKnobbed / posionousKnobbed << endl;
        totalKnobbed = edibleKnobbed / posionousKnobbed;
    }
    else {
        cout << std::setprecision(5) << -1 * (posionousKnobbed / edibleKnobbed) << endl;
        totalKnobbed = -1 * (posionousKnobbed / edibleKnobbed);
    }
    cout << std::setprecision(0) << " s: " << edibleSunken << " e to " << posionousSunken << " p = ";
    if (edibleSunken > posionousSunken) {
        cout << std::setprecision(5) << std::fixed << edibleSunken/posionousSunken * 1.0000 << endl;
        totalSunken = edibleSunken/posionousSunken;
    }
    else {
        cout << std::setprecision(5) << -1 * (posionousSunken / edibleSunken) << endl;
        totalSunken = -1 * (posionousSunken / edibleSunken);
    }

    cout << "cap-surface:" << endl;
    //cap-surface

    cout << std::setprecision(0) << " f: " << edibleFibrous << " e to " << posionousFibrous << " p = ";
    if (edibleFibrous > posionousFibrous) {
        cout << std::setprecision(5) << edibleFibrous / posionousFibrous << endl;
        totalFibrous = edibleFibrous / posionousFibrous;
    }
    else {
        cout << std::setprecision(5) << -1 * (posionousFibrous / edibleFibrous) << endl;
        totalFibrous = -1 * (posionousFibrous / edibleFibrous);
    }
    cout << std::setprecision(0) << " g: " << edibleGrooves << " e to " << posionousGrooves << " p = ";
    if (edibleGrooves > posionousGrooves) {
        cout << std::setprecision(5) << edibleGrooves / posionousGrooves << endl;
        totalGrooves = edibleGrooves / posionousGrooves;
    }
    else {
        cout << std::setprecision(5) << -1 * (posionousGrooves/edibleGrooves) << endl;
        totalGrooves = -1 * (posionousGrooves/edibleGrooves);
    }
    cout << std::setprecision(0) << " y: " << edibleScaly << " e to " << posionousScaly << " p = ";
    if (edibleScaly > posionousScaly) {
        cout << std::setprecision(5) << edibleScaly / posionousScaly << endl;
        totalScaly = edibleScaly / posionousScaly;
    }
    else {
        cout << std::setprecision(5) << -1 * (posionousScaly / edibleScaly) << endl;
        totalScaly = -1 * (posionousScaly / edibleScaly);
    }
    cout << std::setprecision(0) << " s: " << edibleSmooth << " e to " << posionousSmooth << " p = ";
    if (edibleSmooth > posionousSmooth) {
        cout << std::setprecision(5) << edibleSmooth / posionousSmooth << endl;
        totalSmooth = edibleSmooth / posionousSmooth;
    }
    else {
        cout << std::setprecision(5) << -1 * (posionousSmooth / edibleSmooth) << endl;
        totalSmooth = -1 * (posionousSmooth / edibleSmooth);
    }

    cout << "cap-color:" << endl;
    //cap-color

    cout << std::setprecision(0) << " n: " << edibleBrown << " e to " << posionousBrown << " p = ";
    if (edibleBrown > posionousBrown) {
        cout << std::setprecision(5) << edibleBrown / posionousBrown << endl;
        totalBrown = edibleBrown / posionousBrown;
    }
    else {
        cout << std::setprecision(5) << -1 * (posionousBrown / edibleBrown) << endl;
        totalBrown = -1 * (posionousBrown / edibleBrown);
    }
    cout << std::setprecision(0) << " b: " << edibleBuff << " e to " << posionousBuff << " p = ";
    if (edibleBuff > posionousBuff) {
        cout << std::setprecision(5) << edibleBuff / posionousBuff << endl;
        totalBuff = edibleBuff / posionousBuff;
    }
    else {
        cout << std::setprecision(5) << -1 * (posionousBuff / edibleBuff) << endl;
        totalBuff = -1 * (posionousBuff / edibleBuff);
    }
    cout << std::setprecision(0) << " c: " << edibleCinnamon << " e to " << posionousCinnamon << " p = ";
    if (edibleCinnamon > posionousCinnamon) {
        cout << std::setprecision(5) << edibleCinnamon / posionousCinnamon << endl;
        totalCinnamon = edibleCinnamon / posionousCinnamon;
    }
    else {
        cout << std::setprecision(5) << -1 * (posionousCinnamon / edibleCinnamon) << endl;
        totalCinnamon = -1 * (posionousCinnamon / edibleCinnamon);
    }
    cout << std::setprecision(0) << " g: " << edibleGray << " e to " << posionousGray << " p = ";
    if (edibleGray > posionousGray) {
        cout << std::setprecision(5) << edibleGray / posionousGray << endl;
        totalGray = edibleGray / posionousGray;
    }
    else {
        cout << std::setprecision(5) << -1 * (posionousGray / edibleGray) << endl;
        totalGray = -1 * (posionousGray / edibleGray);
    }
    cout << std::setprecision(0) << " r: " << edibleGreen << " e to " << posionousGreen << " p = ";
    if (edibleGreen > posionousGreen) {
        cout << std::setprecision(5) << edibleGreen/posionousGreen << endl;
        totalGreen = edibleGreen/posionousGreen;
    }
    else {
        cout << std::setprecision(5) << -1 * (posionousGreen / edibleGreen) << endl;
    }
    cout << std::setprecision(0) << " p: " << ediblePink << " e to " << posionousPink << " p = ";
    if (ediblePink > posionousPink) {
        cout << std::setprecision(5) << ediblePink / posionousPink << endl;
        totalPink = ediblePink / posionousPink;
    }
    else {
        cout << std::setprecision(5) << -1 * (posionousPink / ediblePink) << endl;
        totalPink = -1 * (posionousPink / ediblePink);
    }
    cout << std::setprecision(0) << " u: " << ediblePurple << " e to " << posionousPurple << " p = ";
    if (ediblePurple > posionousPurple) {
        cout << std::setprecision(5) << ediblePurple/posionousPurple << endl;
        totalPurple = ediblePurple/posionousPurple;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousPurple / ediblePurple) << endl;
    cout << std::setprecision(0) << " e: " << edibleRed << " e to " << posionousRed << " p = ";
    if (edibleRed > posionousRed) {
        cout << std::setprecision(5) << edibleRed / posionousRed << endl;
        totalRed = edibleRed / posionousRed;
    }
    else {
        cout << std::setprecision(5) << -1 * (posionousRed / edibleRed) << endl;
        totalRed = -1 * (posionousRed / edibleRed);
    }
    cout << std::setprecision(0) << " w: " << edibleWhite << " e to " << posionousWhite << " p = ";
    if (edibleWhite > posionousWhite) {
        cout << std::setprecision(5) << edibleWhite / posionousWhite << endl;
        totalWhite = edibleWhite / posionousWhite;
    }
    else {
        cout << std::setprecision(5) << -1 * (posionousWhite / edibleWhite) << endl;
        totalWhite = -1 * (posionousWhite / edibleWhite);
    }
    cout << std::setprecision(0) << " y: " << edibleYellow << " e to " << posionousYellow << " p = ";
    if (edibleYellow > posionousYellow) {
        cout << std::setprecision(5) << edibleYellow / posionousYellow << endl;
        totalYellow = edibleYellow / posionousYellow;
    }
    else {
        cout << std::setprecision(5) << -1 * (posionousYellow / edibleYellow) << endl;
        totalYellow = -1 * (posionousYellow / edibleYellow);
    }

    cout << "bruises:" << endl;
    //bruises

    cout << std::setprecision(0) << " t: " << edibleBruises << " e to " << posionousBruises << " p = ";
    if (edibleBruises > posionousBruises) {
        cout << std::setprecision(5) << edibleBruises / posionousBruises << endl;
        totalBruises = edibleBruises / posionousBruises;
    }
    else {
        cout << std::setprecision(5) << -1 * (posionousBruises / edibleBruises) << endl;
        totalBruises = -1 * (posionousBruises / edibleBruises);
    }
    cout << std::setprecision(0) << " f: " << edibleNo << " e to " << posionousNo << " p = ";
    if (edibleNo > posionousNo) {
        cout << std::setprecision(5) << edibleNo / posionousNo << endl;
        totalNo = edibleNo / posionousNo;
    }
    else {
        cout << std::setprecision(5) << -1 * (posionousNo / edibleNo) << endl;
        totalNo = -1 * (posionousNo / edibleNo);
    }

    cout << "odor:" << endl;
    //odor

    cout << std::setprecision(0) << " a: " << edibleAlmond << " e to " << posionousAlmond << " p = ";
    if (edibleAlmond > posionousAlmond) {
        cout << std::setprecision(5) << edibleAlmond/posionousAlmond << endl;
        totalAlmond = edibleAlmond/posionousAlmond;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousAlmond / edibleAlmond) << endl;
    cout << std::setprecision(0) << " l: " << edibleAnise << " e to " << posionousAnise << " p = ";
    if (edibleAnise > posionousAnise) {
        cout << std::setprecision(5) << edibleAnise /posionousAnise<< endl;
        totalAnise = edibleAnise/posionousAnise;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousAnise / edibleAnise) << endl;
    cout << std::setprecision(0) << " c: " << edibleCreosote << " e to " << posionousCreosote << " p = ";
    if (edibleCreosote > posionousCreosote) {
        cout << std::setprecision(5) << edibleCreosote / posionousCreosote << endl;
        totalCreosote = edibleCreosote / posionousCreosote;
    }
    else {
        cout << std::setprecision(5) << -1 * (posionousCreosote/edibleCreosote) << endl;
        totalCreosote = -1 * (posionousCreosote/edibleCreosote);
    }
    cout << std::setprecision(0) << " y: " << edibleFishy << " e to " << posionousFishy << " p = ";
    if (edibleFishy > posionousFishy)
        cout << std::setprecision(5) << edibleFishy / posionousFishy << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousFishy/edibleFishy) << endl;
        totalFishy = -1 * (posionousFishy/edibleFishy);
    }
    cout << std::setprecision(0) << " f: " << edibleFoul << " e to " << posionousFoul << " p = ";
    if (edibleFoul > posionousFoul)
        cout << std::setprecision(5) << edibleFoul / posionousFoul << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousFoul/edibleFoul) << endl;
        totalFoul = -1 * (posionousFoul/edibleFoul);
    }
    cout << std::setprecision(0) << " m: " << edibleMusty << " e to " << posionousMusty << " p = ";
    if (edibleMusty > posionousMusty)
        cout << std::setprecision(5) << edibleMusty / posionousMusty << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousMusty/edibleMusty) << endl;
        totalMusty = -1 * (posionousMusty/edibleMusty);
    }
    cout << std::setprecision(0) << " n: " << edibleNone << " e to " << posionousNone << " p = ";
    if (edibleNone > posionousNone) {
        cout << std::setprecision(5) << edibleNone / posionousNone << endl;
        totalNone = edibleNone / posionousNone;
    }
    else {
        cout << std::setprecision(5) << -1 * (posionousNone / edibleNone) << endl;
        totalNone = -1 * (posionousNone / edibleNone);
    }
    cout << std::setprecision(0) << " p: " << ediblePungent << " e to " << posionousPungent << " p = ";
    if (ediblePungent > posionousPungent)
        cout << std::setprecision(5) << ediblePungent / posionousPungent << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousPungent/ediblePungent) << endl;
        totalPungent = -1 * (posionousPungent/ediblePungent);
    }
    cout << std::setprecision(0) << " s: " << edibleSpicy << " e to " << posionousSpicy << " p = ";
    if (edibleSpicy > posionousSpicy)
        cout << std::setprecision(5) << edibleSpicy / posionousSpicy << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousSpicy/edibleSpicy) << endl;
        totalSpicy = -1 * (posionousSpicy/edibleSpicy);
    }

    cout << "gill-attachment:" << endl;
    //gill-attachment

    cout << std::setprecision(0) << " a: " << edibleAttached << " e to " << posionousAttached << " p = ";
    if (edibleAttached > posionousAttached) {
        cout << std::setprecision(5) << edibleAttached / posionousAttached << endl;
        totalAttached = edibleAttached / posionousAttached;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousAttached / edibleAttached) << endl;
    cout << std::setprecision(0) << " d: " << edibleDescending << " e to " << posionousDescending << " p = ";
    if (edibleDescending == -posionousDescending){
        cout << "0.00000" << endl;
        totalDescending = 0;
    }
    else
        cout << "0.00000" << endl;
    cout << std::setprecision(0) << " f: " << edibleFree << " e to " << posionousFree << " p = ";
    if (edibleFree > posionousFree) {
        cout << std::setprecision(5) << edibleFree / posionousFree << endl;
        totalFree = edibleFree / posionousFree;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousFree / edibleFree) << endl;
    cout << std::setprecision(0) << " n: " << edibleNotched << " e to " << posionousNotched << " p = ";
    if (edibleNotched == posionousNotched) {
        cout << "0.00000" << endl;
        totalNotched = 0.00000;
    }
    else
        cout << "0.00000" << endl;

    cout << "gill-spacing:" << endl;
    //gill-spacing

    cout << std::setprecision(0) << " c: " << edibleClose << " e to " << posionousClose << " p = ";
    if (edibleClose > posionousClose)
        cout << std::setprecision(5) << edibleClose / posionousClose << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousClose / edibleClose) << endl;
        totalClose = -1 * (posionousClose / edibleClose);
    }
    cout << std::setprecision(0) << " w: " << edibleCrowded << " e to " << posionousCrowded << " p = ";
    if (edibleCrowded > posionousCrowded) {
        cout << std::setprecision(5) << edibleCrowded / posionousCrowded << endl;
        totalCrowded = edibleCrowded / posionousCrowded;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousCrowded / edibleCrowded) << endl;
    cout << std::setprecision(0) << " d: " << edibleDistant << " e to " << posionousDistant << " p = ";
    if (edibleDistant == posionousDistant) {
        cout << "0.00000" << endl;
        totalDistant = 0.00000;
    }
    else
        cout << "0.00000" << endl;

    cout << "gill-size:" << endl;
    //gill-size

    cout << std::setprecision(0) << " b: " << edibleBroad << " e to " << posionousBroad << " p = ";
    if (edibleBroad > posionousBroad) {
        cout << std::setprecision(5) << edibleBroad / posionousBroad << endl;
        totalBroad = edibleBroad / posionousBroad;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousBroad / edibleBroad) << endl;
    cout << std::setprecision(0) << " n: " << edibleNarrow << " e to " << posionousNarrow << " p = ";
    if (edibleNarrow > posionousNarrow)
        cout << std::setprecision(5) << edibleNarrow / posionousNarrow << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousNarrow / edibleNarrow) << endl;
        totalNarrow = -1 * (posionousNarrow / edibleNarrow);
    }

    cout << "gill-color:" << endl;
    //gill-color

    cout << std::setprecision(0) << " k: " << edibleGillBlack << " e to " << posionousGillBlack << " p = ";
    if (edibleGillBlack > posionousGillBlack) {
        cout << std::setprecision(5) << edibleGillBlack / posionousGillBlack << endl;
        totalGillBlack = edibleGillBlack / posionousGillBlack;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousGillBlack / edibleGillBlack) << endl;
    cout << std::setprecision(0) << " n: " << edibleGillBrown << " e to " << posionousGillBrown << " p = ";
    if (edibleGillBrown > posionousGillBrown) {
        cout << std::setprecision(5) << edibleGillBrown / posionousGillBrown << endl;
        totalGillBrown = edibleGillBrown / posionousGillBrown;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousGillBrown / edibleGillBrown) << endl;
    cout << std::setprecision(0) << " b: " << edibleGillBuff << " e to " << posionousGillBuff << " p = ";
    if (edibleGillBuff > posionousGillBuff)
        cout << std::setprecision(5) << edibleGillBuff / posionousGillBuff << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousGillBuff) << endl;
        totalGillBuff = -1 * (posionousGillBuff);
    }
    cout << std::setprecision(0) << " h: " << edibleGillChocolate << " e to " << posionousGillChocolate << " p = ";
    if (edibleGillChocolate > posionousGillChocolate)
        cout << std::setprecision(5) << edibleGillChocolate / posionousGillChocolate << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousGillChocolate / edibleGillChocolate) << endl;
        totalGillChocolate = -1 * (posionousGillChocolate / edibleGillChocolate);
    }
    cout << std::setprecision(0) << " g: " << edibleGillGray << " e to " << posionousGillGray << " p = ";
    if (edibleGillGray > posionousGillGray)
        cout << std::setprecision(5) << edibleGillGray / posionousGillGray << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousGillGray / edibleGillGray) << endl;
        totalGillGray = -1 * (posionousGillGray / edibleGillGray);
    }
    cout << std::setprecision(0) << " r: " << edibleGillGreen << " e to " << posionousGillGreen << " p = ";
    if (edibleGillGreen > posionousGillGreen)
        cout << std::setprecision(5) << edibleGillGreen / posionousGillGreen << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousGillGreen) << endl;
        totalGillGreen = -1 * (posionousGillGreen);
    }
    cout << std::setprecision(0) << " o: " << edibleGillOrange << " e to " << posionousGillOrange << " p = ";
    if (edibleGillOrange > posionousGillOrange) {
        cout << std::setprecision(5) << edibleGillOrange<< endl;
        totalGillOrange = edibleGillOrange;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousGillOrange / edibleGillOrange) << endl;
    cout << std::setprecision(0) << " p: " << edibleGillPink << " e to " << posionousGillPink << " p = ";
    if (edibleGillPink > posionousGillPink) {
        cout << std::setprecision(5) << edibleGillPink / posionousGillPink << endl;
        totalGillPink = edibleGillPink / posionousGillPink;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousGillPink / edibleGillPink) << endl;
    cout << std::setprecision(0) << " u: " << edibleGillPurple << " e to " << posionousGillPurple << " p = ";
    if (edibleGillPurple > posionousGillPurple) {
        cout << std::setprecision(5) << edibleGillPurple / posionousGillPurple << endl;
        totalGillPurple = edibleGillPurple / posionousGillPurple;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousGillPurple / edibleGillPurple) << endl;
    cout << std::setprecision(0) << " e: " << edibleGillRed << " e to " << posionousGillRed << " p = ";
    if (edibleGillRed > posionousGillRed) {
        cout << std::setprecision(5) << edibleGillRed << endl;
        totalGillRed = edibleGillRed;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousGillRed / edibleGillRed) << endl;
    cout << std::setprecision(0) << " w: " << edibleGillWhite << " e to " << posionousGillWhite << " p = ";
    if (edibleGillWhite > posionousGillWhite) {
        cout << std::setprecision(5) << edibleGillWhite / posionousGillWhite << endl;
        totalGillWhite = edibleGillWhite / posionousGillWhite;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousGillWhite / edibleGillWhite) << endl;
    cout << std::setprecision(0) << " y: " << edibleGillYellow << " e to " << posionousGillYellow << " p = ";
    if (edibleGillYellow > posionousGillYellow) {
        cout << std::setprecision(5) << edibleGillYellow / posionousGillYellow << endl;
        totalGillYellow = edibleGillYellow / posionousGillYellow;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousGillYellow / edibleGillYellow) << endl;

    cout << "stalk-shape:" << endl;
    //stalk-shape

    cout << std::setprecision(0) << " e: " << edibleEnlarging << " e to " << posionousEnlarging << " p = ";
    if (edibleEnlarging > posionousEnlarging)
        cout << std::setprecision(5) << edibleEnlarging / posionousEnlarging << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousEnlarging / edibleEnlarging) << endl;
        totalEnlarging = -1 * (posionousEnlarging / edibleEnlarging);
    }
    cout << std::setprecision(0) << " t: " << edibleTapering << " e to " << posionousTapering << " p = ";
    if (edibleTapering > posionousTapering) {
        cout << std::setprecision(5) << edibleTapering / posionousTapering << endl;
        totalTapering = edibleTapering / posionousTapering;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousTapering / edibleTapering) << endl;

    cout << "stalk-root:" << endl;
    //stalk-root

    cout << std::setprecision(0) << " b: " << edibleBulbous << " e to " << posionousBulbous << " p = ";
    if (edibleBulbous > posionousBulbous) {
        cout << std::setprecision(5) << edibleBulbous / posionousBulbous << endl;
        totalBulbous = edibleBulbous / posionousBulbous;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousBulbous / edibleBulbous) << endl;
    cout << std::setprecision(0) << " c: " << edibleClub << " e to " << posionousClub << " p = ";
    if (edibleClub > posionousClub) {
        cout << std::setprecision(5) << edibleClub / posionousClub << endl;
        totalClub = edibleClub / posionousClub;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousClub / edibleClub) << endl;
    cout << std::setprecision(0) << " u: " << edibleCup << " e to " << posionousCup << " p = ";
    if (edibleCup == posionousCup) {
        cout << "0.00000" << endl;
        totalCup = 0.00000;
    }
    else
        cout << "0.00000" << endl;
    cout << std::setprecision(0) << " e: " << edibleEqual << " e to " << posionousEqual << " p = ";
    if (edibleEqual > posionousEqual) {
        cout << std::setprecision(5) << edibleEqual / posionousEqual << endl;
        totalEqual = edibleEqual / posionousEqual;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousEqual / edibleEqual) << endl;
    cout << std::setprecision(0) << " z: " << edibleRhizomorphs << " e to " << posionousRhizomorphs << " p = ";
    if (edibleRhizomorphs == posionousRhizomorphs) {
        cout << "0.00000" << endl;
        totalRhizomorphs = 0.00000;
    }
    else
        cout << "0.00000" << endl;
    cout << std::setprecision(0) << " r: " << edibleRooted << " e to " << posionousRooted << " p = ";
    if (edibleRooted > posionousRooted) {
        cout << std::setprecision(5) << edibleRooted / posionousRooted << endl;
        totalRooted = edibleRooted / posionousRooted;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousRooted / edibleRooted) << endl;
    cout << std::setprecision(0) << " ?: " << edibleMissing << " e to " << posionousMissing << " p = ";
    if (edibleMissing > posionousMissing)
        cout << std::setprecision(5) << edibleMissing / posionousMissing << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousMissing / edibleMissing) << endl;
        totalMissing = -1 * (posionousMissing / edibleMissing);
    }

    cout << "stalk-surface-above-ring:" << endl;
    //stalk-surface-above-ring

    cout << std::setprecision(0) << " f: " << edibleAboveFibrous << " e to " << posionousAboveFibrous << " p = ";
    if (edibleAboveFibrous > posionousAboveFibrous) {
        cout << std::setprecision(5) << edibleAboveFibrous / posionousAboveFibrous << endl;
        totalAboveFibrous = edibleAboveFibrous / posionousAboveFibrous;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousAboveFibrous / edibleAboveFibrous) << endl;
    cout << std::setprecision(0) << " y: " << edibleAboveScaly << " e to " << posionousAboveScaly << " p = ";
    if (edibleAboveScaly > posionousAboveScaly) {
        cout << std::setprecision(5) << edibleAboveScaly / posionousAboveScaly << endl;
        totalAboveScaly = edibleAboveScaly / posionousAboveScaly;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousAboveScaly / edibleAboveScaly) << endl;
    cout << std::setprecision(0) << " k: " << edibleAboveSilky << " e to " << posionousAboveSilky << " p = ";
    if (edibleAboveSilky > posionousAboveSilky)
        cout << std::setprecision(5) << edibleAboveSilky / posionousAboveSilky << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousAboveSilky / edibleAboveSilky) << endl;
        totalAboveSilky = -1 * (posionousAboveSilky / edibleAboveSilky);
    }
    cout << std::setprecision(0) << " s: " << edibleAboveSmooth << " e to " << posionousAboveSmooth << " p = ";
    if (edibleAboveSmooth > posionousAboveSmooth) {
        cout << std::setprecision(5) << edibleAboveSmooth / posionousAboveSmooth << endl;
        totalAboveSmooth = edibleAboveSmooth / posionousAboveSmooth;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousAboveSmooth / edibleAboveSmooth) << endl;

    cout << "stalk-surface-below-ring:" << endl;
    //stalk-surface-below-ring

    cout << std::setprecision(0) << " f: " << edibleBelowFibrous << " e to " << posionousBelowFibrous << " p = ";
    if (edibleBelowFibrous > posionousBelowFibrous) {
        cout << std::setprecision(5) << edibleBelowFibrous / posionousBelowFibrous << endl;
        totalBelowFibrous = edibleBelowFibrous / posionousBelowFibrous;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousBelowFibrous / edibleBelowFibrous) << endl;
    cout << std::setprecision(0) << " y: " << edibleBelowScaly << " e to " << posionousBelowScaly << " p = ";
    if (edibleBelowScaly > posionousBelowScaly) {
        cout << std::setprecision(5) << edibleBelowScaly / posionousBelowScaly << endl;
        totalBelowScaly = edibleBelowScaly / posionousBelowScaly;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousBelowScaly / edibleBelowScaly) << endl;
    cout << std::setprecision(0) << " k: " << edibleBelowSilky << " e to " << posionousBelowSilky << " p = ";
    if (edibleBelowSilky > posionousBelowSilky)
        cout << std::setprecision(5) << edibleBelowSilky / posionousBelowSilky << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousBelowSilky / edibleBelowSilky) << endl;
        totalBelowSilky = -1 * (posionousBelowSilky / edibleBelowSilky);
    }
    cout << std::setprecision(0) << " s: " << edibleBelowSmooth << " e to " << posionousBelowSmooth << " p = ";
    if (edibleBelowSmooth > posionousBelowSmooth) {
        cout << std::setprecision(5) << edibleBelowSmooth / posionousBelowSmooth << endl;
        totalBelowSmooth = edibleBelowSmooth / posionousBelowSmooth;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousBelowSmooth / edibleBelowSmooth) << endl;

    cout << "stalk-color-above-ring:" << endl;
    //stalk-color-above-ring

    cout << std::setprecision(0) << " n: " << edibleAboveBrown << " e to " << posionousAboveBrown << " p = ";
    if (edibleAboveBrown > posionousAboveBrown)
        cout << std::setprecision(5) << edibleAboveBrown / posionousAboveBrown << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousAboveBrown / edibleAboveBrown) << endl;
        totalAboveBrown = -1 * (posionousAboveBrown / edibleAboveBrown);
    }
    cout << std::setprecision(0) << " b: " << edibleAboveBuff << " e to " << posionousAboveBuff << " p = ";
    if (edibleAboveBuff == posionousAboveBuff) {
        cout << std::setprecision(5) << edibleAboveBuff<< endl;
        totalAboveBuff = edibleAboveBuff ;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousAboveBuff / edibleAboveBuff) << endl;
    cout << std::setprecision(0) << " c: " << edibleAboveCinnamon << " e to " << posionousAboveCinnamon << " p = ";
    if (edibleAboveCinnamon > posionousAboveCinnamon)
        cout << std::setprecision(5) << edibleAboveCinnamon / posionousAboveCinnamon << endl;
    else {
        cout << std::setprecision(5) << -1*posionousAboveCinnamon << endl;
        totalAboveCinnamon = -1 * posionousAboveCinnamon;
    }
    cout << std::setprecision(0) << " g: " << edibleAboveGray << " e to " << posionousAboveGray << " p = ";
    if (edibleAboveGray > posionousAboveGray) {
        cout << std::setprecision(5) << edibleAboveGray << endl;
        totalAboveGray = edibleAboveGray;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousAboveGray / edibleAboveGray) << endl;
    cout << std::setprecision(0) << " o: " << edibleAboveOrange << " e to " << posionousAboveOrange << " p = ";
    if (edibleAboveOrange > posionousAboveOrange) {
        cout << std::setprecision(5) << edibleAboveOrange << endl;
        totalAboveOrange = edibleAboveOrange;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousAboveOrange / edibleAboveOrange) << endl;
    cout << std::setprecision(0) << " p: " << edibleAbovePink << " e to " << posionousAbovePink << " p = ";
    if (edibleAbovePink > posionousAbovePink)
        cout << std::setprecision(5) << edibleAbovePink / posionousAbovePink << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousAbovePink / edibleAbovePink) << endl;
        totalAbovePink = -1 * (posionousAbovePink / edibleAbovePink);
    }
    cout << std::setprecision(0) << " e: " << edibleAboveRed << " e to " << posionousAboveRed << " p = ";
    if (edibleAboveRed > posionousAboveRed) {
        cout << std::setprecision(5) << edibleAboveRed << endl;
        totalAboveRed = edibleAboveRed;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousAboveRed / edibleAboveRed) << endl;
    cout << std::setprecision(0) << " w: " << edibleAboveWhite << " e to " << posionousAboveWhite << " p = ";
    if (edibleAboveWhite > posionousAboveWhite) {
        cout << std::setprecision(5) << edibleAboveWhite / posionousAboveWhite << endl;
        totalAboveWhite = edibleAboveWhite / posionousAboveWhite;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousAboveWhite / edibleAboveWhite) << endl;
    cout << std::setprecision(0) << " y: " << edibleAboveYellow << " e to " << posionousAboveYellow << " p = ";
    if (edibleAboveYellow > posionousAboveYellow)
        cout << std::setprecision(5) << edibleAboveYellow / posionousAboveYellow << endl;
    else {
        cout << std::setprecision(5) <<-1*posionousAboveYellow << endl;
        totalAboveYellow = -1 * posionousAboveYellow;
    }

    cout << "stalk-color-below-ring:" << endl;
    //stalk-color-below-ring

    cout << std::setprecision(0) << " n: " << edibleBelowBrown << " e to " << posionousBelowBrown << " p = ";
    if (edibleBelowBrown > posionousBelowBrown)
        cout << std::setprecision(5) << edibleBelowBrown / posionousBelowBrown << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousBelowBrown / edibleBelowBrown) << endl;
    }
    cout << std::setprecision(0) << " b: " << edibleBelowBuff << " e to " << posionousBelowBuff << " p = ";
    if (edibleBelowBuff > posionousBelowBuff)
        cout << std::setprecision(5) << edibleBelowBuff / posionousBelowBuff << endl;
    else {
        cout << std::setprecision(5) << -1 * posionousBelowBuff << endl;
        totalBelowBuff = -1 * posionousBelowBuff;
    }
    cout << std::setprecision(0) << " c: " << edibleBelowCinnamon << " e to " << posionousBelowCinnamon << " p = ";
    if (edibleBelowCinnamon > posionousBelowCinnamon)
        cout << std::setprecision(5) << edibleBelowCinnamon / posionousBelowCinnamon << endl;
    else {
        cout << std::setprecision(5) <<-1*posionousBelowCinnamon<< endl;
        totalBelowCinnamon = -1 * posionousBelowCinnamon;
    }
    cout << std::setprecision(0) << " g: " << edibleBelowGray << " e to " << posionousBelowGray << " p = ";
    if (edibleBelowGray > posionousBelowGray) {
        cout << std::setprecision(5) << edibleBelowGray << endl;
        totalBelowGray = edibleBelowGray;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousBelowGray / edibleBelowGray) << endl;
    cout << std::setprecision(0) << " o: " << edibleBelowOrange << " e to " << posionousBelowOrange << " p = ";
    if (edibleBelowOrange > posionousBelowOrange) {
        cout << std::setprecision(5) << edibleBelowOrange  << endl;
        totalBelowOrange = edibleBelowOrange;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousBelowOrange / edibleBelowOrange) << endl;
    cout << std::setprecision(0) << " p: " << edibleBelowPink << " e to " << posionousBelowPink << " p = ";
    if (edibleBelowPink > posionousBelowPink)
        cout << std::setprecision(5) << edibleBelowPink / posionousBelowPink << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousBelowPink / edibleBelowPink) << endl;
        totalBelowPink = -1 * (posionousBelowPink / edibleBelowPink);
    }
    cout << std::setprecision(0) << " e: " << edibleBelowRed << " e to " << posionousBelowRed << " p = ";
    if (edibleBelowRed > posionousBelowRed) {
        cout << std::setprecision(5) << edibleBelowRed  << endl;
        totalBelowRed = edibleBelowRed;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousBelowRed / edibleBelowRed) << endl;
    cout << std::setprecision(0) << " w: " << edibleBelowWhite << " e to " << posionousBelowWhite << " p = ";
    if (edibleBelowWhite > posionousBelowWhite) {
        cout << std::setprecision(5) << edibleBelowWhite / posionousBelowWhite << endl;
        totalBelowWhite = edibleBelowWhite / posionousBelowWhite;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousBelowWhite / edibleBelowWhite) << endl;
    cout << std::setprecision(0) << " y: " << edibleBelowYellow << " e to " << posionousBelowYellow << " p = ";
    if (edibleBelowYellow > posionousBelowYellow)
        cout << std::setprecision(5) << edibleBelowYellow / posionousBelowYellow << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousBelowYellow ) << endl;
        totalBelowYellow = -1 * (posionousBelowYellow);
    }

    cout << "veil-type:" << endl;
    //veil-type
    cout << std::setprecision(0) << " p: " << ediblePartial << " e to " << posionousPartial << " p = ";
    if (ediblePartial > posionousPartial) {
        cout << std::setprecision(5) << ediblePartial / posionousPartial << endl;
        totalPartial = ediblePartial / posionousPartial;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousPartial / ediblePartial) << endl;
    cout << std::setprecision(0) << " u: " << edibleUniversal << " e to " << posionousUniversal << " p = ";
    if (edibleUniversal > posionousUniversal)
        cout << "0.00000" << endl;
    else
        cout << "0.00000" << endl;

    cout << "veil-color:" << endl;
    //veil-color

    cout << std::setprecision(0) << " n: " << edibleVeilBrown << " e to " << posionousVeilBrown << " p = ";
    if (edibleVeilBrown > posionousVeilBrown) {
        cout << std::setprecision(5) << edibleVeilBrown << endl;
        totalVeilBrown = edibleVeilBrown;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousVeilBrown / edibleVeilBrown) << endl;
    cout << std::setprecision(0) << " o: " << edibleVeilOrange << " e to " << posionousVeilOrange << " p = ";
    if (edibleVeilOrange > posionousVeilOrange) {
        cout << std::setprecision(5) << edibleVeilOrange << endl;
        totalVeilOrange = edibleVeilOrange;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousVeilOrange / edibleVeilOrange) << endl;
    cout << std::setprecision(0) << " w: " << edibleVeilWhite << " e to " << posionousVeilWhite << " p = ";
    if (edibleVeilWhite > posionousVeilWhite) {
        cout << std::setprecision(5) << edibleVeilWhite / posionousVeilWhite << endl;
        totalVeilWhite = edibleVeilWhite / posionousVeilWhite;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousVeilWhite / edibleVeilWhite) << endl;
    cout << std::setprecision(0) << " y: " << edibleVeilYellow << " e to " << posionousVeilYellow << " p = ";
    if (edibleVeilYellow > posionousVeilYellow)
        cout << std::setprecision(5) << edibleVeilYellow / posionousVeilYellow << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousVeilYellow ) << endl;
        totalVeilYellow = -1 * (posionousVeilYellow);
    }

    cout << "ring-number:" << endl;
    //ring-number

    cout << std::setprecision(0) << " n: " << edibleNumberNone << " e to " << posionousNumberNone << " p = ";
    if (edibleNumberNone > posionousNumberNone)
        cout << std::setprecision(5) << edibleNumberNone / posionousNumberNone << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousNumberNone) << endl;
        totalNumberNone = -1 * (posionousNumberNone);
    }
    cout << std::setprecision(0) << " o: " << edibleNumberOne << " e to " << posionousNumberOne << " p = ";
    if (edibleNumberOne > posionousNumberOne)
        cout << std::setprecision(5) << edibleNumberOne / posionousNumberOne << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousNumberOne / edibleNumberOne) << endl;
        totalNumberOne = -1 * (posionousNumberOne / edibleNumberOne);
    }
    cout << std::setprecision(0) << " t: " << edibleNumberTwo << " e to " << posionousNumberTwo << " p = ";
    if (edibleNumberTwo > posionousNumberTwo) {
        cout << std::setprecision(5) << edibleNumberTwo / posionousNumberTwo << endl;
        totalNumberTwo = edibleNumberTwo / posionousNumberTwo;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousNumberTwo / edibleNumberTwo) << endl;

    cout << "ring-type:" << endl;
    //ring-type

    cout << std::setprecision(0) << " c: " << edibleTypeCobwebby << " e to " << posionousTypeCobwebby << " p = ";
    if (edibleTypeCobwebby > posionousTypeCobwebby)
        cout << "0.00000" << endl;
    else
        cout << "0.00000" << endl;
    cout << std::setprecision(0) << " e: " << edibleTypeEvanescent<< " e to " << posionousTypeEvanescent << " p = ";
    if (edibleTypeEvanescent > posionousTypeEvanescent)
        cout << std::setprecision(5) << edibleTypeEvanescent / posionousTypeEvanescent << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousTypeEvanescent / edibleTypeEvanescent) << endl;
        totalTypeEvanescent = -1 * (posionousTypeEvanescent / edibleTypeEvanescent);
    }
    cout << std::setprecision(0) << " f: " << edibleTypeFlaring << " e to " << posionousTypeFlaring << " p = ";
    if (edibleTypeFlaring > posionousTypeFlaring) {
        cout << std::setprecision(5) << edibleTypeFlaring<< endl;
        totalTypeFlaring = edibleTypeFlaring;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousTypeFlaring / edibleTypeFlaring) << endl;
    cout << std::setprecision(0) << " l: " << edibleTypeLarge << " e to " << posionousTypeLarge << " p = ";
    if (edibleTypeLarge > posionousTypeLarge)
        cout << std::setprecision(5) << edibleTypeLarge / posionousTypeLarge << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousTypeLarge) << endl;
        totalTypeLarge = -1 * (posionousTypeLarge);
    }
    cout << std::setprecision(0) << " n: " << edibleTypeNone << " e to " << posionousTypeNone << " p = ";
    if (edibleTypeNone > posionousTypeNone)
        cout << std::setprecision(5) << edibleTypeNone / posionousTypeNone << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousTypeNone) << endl;
        totalTypeNone = -1 * (posionousTypeNone);
    }
    cout << std::setprecision(0) << " p: " << edibleTypePendant << " e to " << posionousTypePendant << " p = ";
    if (edibleTypePendant > posionousTypePendant) {
        cout << std::setprecision(5) << edibleTypePendant / posionousTypePendant << endl;
        totalTypePendant = edibleTypePendant / posionousTypePendant;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousTypePendant / edibleTypePendant) << endl;
    cout << std::setprecision(0) << " s: " << edibleTypeSheathing << " e to " << posionousTypeSheathing << " p = ";
    if (edibleTypeSheathing > posionousTypeSheathing)
        cout << "0.00000" << endl;
    else
        cout << "0.00000" << endl;
    cout << std::setprecision(0) << " z: " << edibleTypeZone << " e to " << posionousTypeZone << " p = ";
    if (edibleTypeZone > posionousTypeZone)
        cout << "0.00000" << endl;
    else
        cout << "0.00000" << endl;

    cout << "spore-print-color:" << endl;
    //spore-print-color

    cout << std::setprecision(0) << " k: " << edibleSporeBlack << " e to " << posionousSporeBlack << " p = ";
    if (edibleSporeBlack > posionousSporeBlack) {
        cout << std::setprecision(5) << edibleSporeBlack / posionousSporeBlack << endl;
        totalSporeBlack = edibleSporeBlack / posionousSporeBlack;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousSporeBlack / edibleSporeBlack) << endl;
    cout << std::setprecision(0) << " n: " << edibleSporeBrown << " e to " << posionousSporeBrown << " p = ";
    if (edibleSporeBrown > posionousSporeBrown) {
        cout << std::setprecision(5) << edibleSporeBrown / posionousSporeBrown << endl;
        totalSporeBrown = edibleSporeBrown / posionousSporeBrown;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousSporeBrown / edibleSporeBrown) << endl;
    cout << std::setprecision(0) << " b: " << edibleSporeBuff << " e to " << posionousSporeBuff << " p = ";
    if (edibleSporeBuff > posionousSporeBuff) {
        cout << std::setprecision(5) << edibleSporeBuff << endl;
        totalSporeBuff = edibleSporeBuff;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousSporeBuff / edibleSporeBuff) << endl;
    cout << std::setprecision(0) << " h: " << edibleSporeChocolate << " e to " << posionousSporeChocolate << " p = ";
    if (edibleSporeChocolate > posionousSporeChocolate)
        cout << std::setprecision(5) << edibleSporeChocolate / posionousSporeChocolate << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousSporeChocolate / edibleSporeChocolate) << endl;
        totalSporeChocolate = -1 * (posionousSporeChocolate / edibleSporeChocolate);
    }
    cout << std::setprecision(0) << " r: " << edibleSporeGreen << " e to " << posionousSporeGreen << " p = ";
    if (edibleSporeGreen > posionousSporeGreen)
        cout << std::setprecision(5) << edibleSporeGreen / posionousSporeGreen << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousSporeGreen ) << endl;
        totalSporeGreen = -1 * (posionousSporeGreen);
    }
    cout << std::setprecision(0) << " o: " << edibleSporeOrange << " e to " << posionousSporeOrange << " p = ";
    if (edibleSporeOrange > posionousSporeOrange) {
        cout << std::setprecision(5) << edibleSporeOrange  << endl;
        totalSporeOrange = edibleSporeOrange;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousSporeOrange / edibleSporeOrange) << endl;
    cout << std::setprecision(0) << " u: " << edibleSporePurple << " e to " << posionousSporePurple << " p = ";
    if (edibleSporePurple > posionousSporePurple) {
        cout << std::setprecision(5) << edibleSporePurple / posionousSporePurple << endl;
        totalSporePurple = edibleSporePurple / posionousSporePurple;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousSporePurple / edibleSporePurple) << endl;
    cout << std::setprecision(0) << " w: " << edibleSporeWhite << " e to " << posionousSporeWhite << " p = ";
    if (edibleSporeWhite > posionousSporeWhite)
        cout << std::setprecision(5) << edibleSporeWhite / posionousSporeWhite << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousSporeWhite / edibleSporeWhite) << endl;
        totalSporeWhite = -1 * (posionousSporeWhite / edibleSporeWhite);
    }
    cout << std::setprecision(0) << " y: " << edibleSporeYellow << " e to " << posionousSporeYellow << " p = ";
    if (edibleSporeYellow > posionousSporeYellow) {
        cout << std::setprecision(5) << edibleSporeYellow << endl;
        totalSporeYellow = edibleSporeYellow;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousSporeYellow / edibleSporeYellow) << endl;

    cout << "population:" << endl;
    //population
    cout << std::setprecision(0) << " a: " << edibleAbundant << " e to " << posionousAbundant << " p = ";
    if (edibleAbundant > posionousAbundant) {
        cout << std::setprecision(5) << edibleAbundant  << endl;
        totalAbundant = edibleAbundant;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousAbundant / edibleAbundant) << endl;
    cout << std::setprecision(0) << " c: " << edibleClustered << " e to " << posionousClustered << " p = ";
    if (edibleClustered > posionousClustered)
        cout << "0.00000" << endl;
    else
        cout << "0.00000" << endl;
    cout << std::setprecision(0) << " n: " << edibleNumerous << " e to " << posionousNumerous << " p = ";
    if (edibleNumerous > posionousNumerous) {
        cout << std::setprecision(5) << edibleNumerous  << endl;
        totalNumerous = edibleNumerous;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousNumerous / edibleNumerous) << endl;
    cout << std::setprecision(0) << " s: " << edibleScattered << " e to " << posionousScattered << " p = ";
    if (edibleScattered > posionousScattered) {
        cout << std::setprecision(5) << edibleScattered / posionousScattered << endl;
        totalScattered = edibleScattered / posionousScattered;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousScattered / edibleScattered) << endl;
    cout << std::setprecision(0) << " v: " << edibleSeveral << " e to " << posionousSeveral << " p = ";
    if (edibleSeveral > posionousSeveral)
        cout << std::setprecision(5) << edibleSeveral / posionousSeveral << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousSeveral / edibleSeveral) << endl;
        totalSeveral = -1 * (posionousSeveral / edibleSeveral);
    }
    cout << std::setprecision(0) << " y: " << edibleSolitary << " e to " << posionousSolitary << " p = ";
    if (edibleSolitary > posionousSolitary) {
        cout << std::setprecision(5) << edibleSolitary / posionousSolitary << endl;
        totalSolitary = edibleSolitary / posionousSolitary;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousSolitary / edibleSolitary) << endl;

    cout << "habitat:" << endl;
    //habitat

    cout << std::setprecision(0) << " g: " << edibleGrasses << " e to " << posionousGrasses << " p = ";
    if (edibleGrasses > posionousGrasses) {
        cout << std::setprecision(5) << edibleGrasses / posionousGrasses << endl;
        totalGrasses = edibleGrasses / posionousGrasses;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousGrasses / edibleGrasses) << endl;
    cout << std::setprecision(0) << " l: " << edibleLeaves << " e to " << posionousLeaves << " p = ";
    if (edibleLeaves > posionousLeaves)
        cout << std::setprecision(5) << edibleLeaves / posionousLeaves << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousLeaves / edibleLeaves) << endl;
        totalLeaves = -1 * (posionousLeaves / edibleLeaves);
    }
    cout << std::setprecision(0) << " m: " << edibleMeadows << " e to " << posionousMeadows << " p = ";
    if (edibleMeadows > posionousMeadows) {
        cout << std::setprecision(5) << edibleMeadows / posionousMeadows << endl;
        totalMeadows = edibleMeadows / posionousMeadows;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousMeadows / edibleMeadows) << endl;
    cout << std::setprecision(0) << " p: " << ediblePaths << " e to " << posionousPaths << " p = ";
    if (ediblePaths > posionousPaths)
        cout << std::setprecision(5) << ediblePaths / posionousPaths << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousPaths / ediblePaths) << endl;
        totalPaths = -1 * (posionousPaths / ediblePaths);
    }
    cout << std::setprecision(0) << " u: " << edibleUrban << " e to " << posionousUrban << " p = ";
    if (edibleUrban > posionousUrban)
        cout << std::setprecision(5) << edibleUrban / posionousUrban << endl;
    else {
        cout << std::setprecision(5) << -1 * (posionousUrban / edibleUrban) << endl;
        totalUrban = -1 * (posionousUrban / edibleUrban);
    }
    cout << std::setprecision(0) << " w: " << edibleWaste << " e to " << posionousWaste << " p = ";
    if (edibleWaste > posionousWaste) {
        cout << std::setprecision(5) << edibleWaste<< endl;
        totalWaste = edibleWaste;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousWaste / edibleWaste) << endl;
    cout << std::setprecision(0) << " d: " << edibleWoods << " e to " << posionousWoods << " p = ";
    if (edibleWoods > posionousWoods) {
        cout << std::setprecision(5) << edibleWoods / posionousWoods << endl;
        totalWoods = edibleWoods / posionousWoods;
    }
    else
        cout << std::setprecision(5) << -1 * (posionousWoods / edibleWoods) << endl;
  
    std::string line_;
    ifstream file_("mushrooms.txt");
    if (file_.is_open())
    {
        while (getline(file_, line_))
        {
            predictionChecking(line_);
        }
        file_.close();
    }
    else
        cout << "File is not opening properly";

}


void findCharacteristics(string line_) //takes first 500 mushrooms & count # of p/e characteristics for every variable
{  
    string classtype = line_.substr(0, 1);
    string capshape = line_.substr(2,1);
    string capsurface = line_.substr(4, 1);
    string capcolor = line_.substr(6, 1);
    string bruises = line_.substr(8, 1);
    string odor = line_.substr(10, 1);
    string gillattachment = line_.substr(12, 1);
    string gillspacing = line_.substr(14, 1);
    string gillsize = line_.substr(16, 1);
    string gillcolor = line_.substr(18, 1);
    string stalkshape = line_.substr(20, 1);
    string stalkroot = line_.substr(22, 1);
    string stalksurfaceabove = line_.substr(24, 1);
    string stalksurfacebelow = line_.substr(26, 1);
    string stalkcolorabove = line_.substr(28, 1);
    string stalkcolorbelow = line_.substr(30, 1);
    string veiltype = line_.substr(32, 1);
    string veilcolor = line_.substr(34, 1);
    string ringnumber = line_.substr(36, 1);
    string ringtype = line_.substr(38, 1);
    string sporecolor = line_.substr(40, 1);
    string population = line_.substr(42, 1);
    string habitat = line_.substr(44, 1);

    if (classtype == "e")
    {
        //capshape
        if (capshape == "b")
            edibleBell++;
        if (capshape == "c")
            edibleConical++;
        if (capshape == "x")
            edibleConvex++;
        if (capshape == "f")
            edibleFlat++;
        if (capshape == "k")
            edibleKnobbed++;
        if (capshape == "s")
            edibleSunken++;
        //capsurface
        if (capsurface == "f")
            edibleFibrous++;
        if (capsurface == "g")
            edibleGrooves++;
        if (capsurface == "y")
            edibleScaly++;
        if (capsurface == "s")
            edibleSmooth++;
        //capcolor
        if (capcolor == "n")
            edibleBrown++;
        if (capcolor == "b")
            edibleBuff++;
        if (capcolor == "c")
            edibleCinnamon++;
        if (capcolor == "g")
            edibleGray++;
        if (capcolor == "r")
            edibleGreen++;
        if (capcolor == "p")
            ediblePink++;
        if (capcolor == "u")
            ediblePurple++;
        if (capcolor == "e")
            edibleRed++;
        if (capcolor == "w")
            edibleWhite++;
        if (capcolor == "y")
            edibleYellow++;
        //bruises
        if (bruises == "t")
            edibleBruises++;
        if (bruises == "f")
            edibleNo++;
        //odor
        if (odor == "a")
            edibleAlmond++;
        if (odor == "l")
            edibleAnise++;
        if (odor == "c")
            edibleCreosote++;
        if (odor == "y")
            edibleFishy++;
        if (odor == "f")
            edibleFoul++;
        if (odor == "m")
            edibleMusty++;
        if (odor == "n")
            edibleNone++;
        if (odor == "p")
            ediblePungent++;
        if (odor == "s")
            edibleSpicy++;
        //gillattachment
        if (gillattachment == "a")
            edibleAttached++;
        if (gillattachment == "d")
            edibleDescending++;
        if (gillattachment == "f")
            edibleFree++;
        if (gillattachment == "n")
            edibleNotched++;
        //gillspacing
        if (gillspacing == "c")
            edibleClose++;
        if (gillspacing == "w")
            edibleCrowded++;
        if (gillspacing == "d")
            edibleDistant++;
        //gillsize
        if (gillsize == "b")
            edibleBroad++;
        if (gillsize == "n")
            edibleNarrow++;
        //gillcolor
        if (gillcolor == "k")
            edibleGillBlack++;
        if (gillcolor == "n")
            edibleGillBrown++;
        if (gillcolor == "b")
            edibleGillBuff++;
        if (gillcolor == "h")
            edibleGillChocolate++;
        if (gillcolor == "g")
            edibleGillGray++;
        if (gillcolor == "r")
            edibleGillGreen++;
        if (gillcolor == "o")
            edibleGillOrange++;
        if (gillcolor == "p")
            edibleGillPink++;
        if (gillcolor == "u")
            edibleGillPurple++;
        if (gillcolor == "e")
            edibleGillRed++;
        if (gillcolor == "w")
            edibleGillWhite++;
        if (gillcolor == "y")
            edibleGillYellow++;
        //stalkshape
        if (stalkshape == "e")
            edibleEnlarging++;
        if (stalkshape == "t")
            edibleTapering++;
        //stalkroot
        if (stalkroot == "b")
            edibleBulbous++;
        if (stalkroot == "c")
            edibleClub++;
        if (stalkroot == "u")
            edibleCup++;
        if (stalkroot == "e")
            edibleEqual++;
        if (stalkroot == "z")
            edibleRhizomorphs++;
        if (stalkroot == "r")
            edibleRooted++;
        if (stalkroot == "?")
            edibleMissing++;
        //stalksurfaceabove
        if (stalksurfaceabove == "f")
            edibleAboveFibrous++;
        if (stalksurfaceabove == "y")
            edibleAboveScaly++;
        if (stalksurfaceabove == "k")
            edibleAboveSilky++;
        if (stalksurfaceabove == "s")
            edibleAboveSmooth++;
        //stalksurfacebelow
        if (stalksurfacebelow == "f")
            edibleBelowFibrous++;
        if (stalksurfacebelow == "y")
            edibleBelowScaly++;
        if (stalksurfacebelow == "k")
            edibleBelowSilky++;
        if (stalksurfacebelow == "s")
            edibleBelowSmooth++;
        //stalkcolorabove
        if (stalkcolorabove == "n")
            edibleAboveBrown++;
        if (stalkcolorabove == "b")
            edibleAboveBuff++;
        if (stalkcolorabove == "c")
            edibleAboveCinnamon++;
        if (stalkcolorabove == "g")
            edibleAboveGray++;
        if (stalkcolorabove == "o")
            edibleAboveOrange++;
        if (stalkcolorabove == "p")
            edibleAbovePink++;
        if (stalkcolorabove == "e")
            edibleAboveRed++;
        if (stalkcolorabove == "w")
            edibleAboveWhite++;
        if (stalkcolorabove == "y")
            edibleAboveYellow++;
        //stalkcolorbelow
        if (stalkcolorbelow == "n")
            edibleBelowBrown++;
        if (stalkcolorbelow == "b")
            edibleBelowBuff++;
        if (stalkcolorbelow == "c")
            edibleBelowCinnamon++;
        if (stalkcolorbelow == "g")
            edibleBelowGray++;
        if (stalkcolorbelow == "o")
            edibleBelowOrange++;
        if (stalkcolorbelow == "p")
            edibleBelowPink++;
        if (stalkcolorbelow == "e")
            edibleBelowRed++;
        if (stalkcolorbelow == "w")
            edibleBelowWhite++;
        if (stalkcolorbelow == "y")
            edibleBelowYellow++;
        //veiltype
        if (veiltype == "p")
            ediblePartial++;
        if (veiltype == "u")
            edibleUniversal++;
        //veilcolor
        if (veilcolor == "n")
            edibleVeilBrown++;
        if (veilcolor == "o")
            edibleVeilOrange++;
        if (veilcolor == "w")
            edibleVeilWhite++;
        if (veilcolor == "y")
            edibleVeilYellow++;
        //ringnumber
        if (ringnumber == "n")
            edibleNumberNone++;
        if (ringnumber == "o")
            edibleNumberOne++;
        if(ringnumber == "t")
            edibleNumberTwo++;
        //ringtype
        if (ringtype == "c")
            edibleTypeCobwebby++;
        if (ringtype == "e")
            edibleTypeEvanescent++;
        if (ringtype == "f")
            edibleTypeFlaring++;
        if (ringtype == "l")
            edibleTypeLarge++;
        if (ringtype == "n")
            edibleTypeNone++;
        if (ringtype == "p")
            edibleTypePendant++;
        if (ringtype == "s")
            edibleTypeSheathing++;
        if (ringtype == "z")
            edibleTypeZone++;
        //sporecolor
        if (sporecolor == "k")
            edibleSporeBlack++;
        if (sporecolor == "n")
            edibleSporeBrown++;
        if (sporecolor == "b")
            edibleSporeBuff++;
        if (sporecolor == "h")
            edibleSporeChocolate++;
        if (sporecolor == "r")
            edibleSporeGreen++;
        if (sporecolor == "o")
            edibleSporeOrange++;
        if (sporecolor == "u")
            edibleSporePurple++;
        if (sporecolor == "w")
            edibleSporeWhite++;
        if (sporecolor == "y")
            edibleSporeYellow++;
        //population
        if (population == "a")
            edibleAbundant++;
        if (population == "c")
            edibleClustered++;
        if (population == "n")
            edibleNumerous++;
        if (population == "s")
            edibleScattered++;
        if (population == "v")
            edibleSeveral++;
        if (population == "y")
            edibleSolitary++;
        //habitat
        if (habitat == "g")
            edibleGrasses++;
        if (habitat == "l")
            edibleLeaves++;
        if (habitat == "m")
            edibleMeadows++;
        if (habitat == "p")
            ediblePaths++;
        if (habitat == "u")
            edibleUrban++;
        if (habitat == "w")
            edibleWaste++;
        if (habitat == "d")
            edibleWoods++;
    }
    else
    {
        //capshape
        if (capshape == "b")
            posionousBell++;
        if (capshape == "c")
            posionousConical++;
        if (capshape == "x")
            posionousConvex++;
        if (capshape == "f")
            posionousFlat++;
        if (capshape == "k")
            posionousKnobbed++;
        if (capshape == "s")
            posionousSunken++;
        //capsurface
        if (capsurface == "f")
            posionousFibrous++;
        if (capsurface == "g")
            posionousGrooves++;
        if (capsurface == "y")
            posionousScaly++;
        if (capsurface == "s")
            posionousSmooth++;
        //capcolor
        if (capcolor == "n")
            posionousBrown++;
        if (capcolor == "b")
            posionousBuff++;
        if (capcolor == "c")
            posionousCinnamon++;
        if (capcolor == "g")
            posionousGray++;
        if (capcolor == "r")
            posionousGreen++;
        if (capcolor == "p")
            posionousPink++;
        if (capcolor == "u")
            posionousPurple++;
        if (capcolor == "e")
            posionousRed++;
        if (capcolor == "w")
            posionousWhite++;
        if (capcolor == "y")
            posionousYellow++;
        //bruises
        if (bruises == "t")
            posionousBruises++;
        if (bruises == "f")
            posionousNo++;
        //odor
        if (odor == "a")
            posionousAlmond++;
        if (odor == "l")
            posionousAnise++;
        if (odor == "c")
            posionousCreosote++;
        if (odor == "y")
            posionousFishy++;
        if (odor == "f")
            posionousFoul++;
        if (odor == "m")
            posionousMusty++;
        if (odor == "n")
            posionousNone++;
        if (odor == "p")
            posionousPungent++;
        if (odor == "s")
            posionousSpicy++;
        //gillattachment
        if (gillattachment == "a")
            posionousAttached++;
        if (gillattachment == "d")
            posionousDescending++;
        if (gillattachment == "f")
            posionousFree++;
        if (gillattachment == "n")
            posionousNotched++;
        //gillspacing
        if (gillspacing == "c")
            posionousClose++;
        if (gillspacing == "w")
            posionousCrowded++;
        if (gillspacing == "d")
            posionousDistant++;
        //gillsize
        if (gillsize == "b")
            posionousBroad++;
        if (gillsize == "n")
            posionousNarrow++;
        //gillcolor
        if (gillcolor == "k")
            posionousGillBlack++;
        if (gillcolor == "n")
            posionousGillBrown++;
        if (gillcolor == "b")
            posionousGillBuff++;
        if (gillcolor == "h")
            posionousGillChocolate++;
        if (gillcolor == "g")
            posionousGillGray++;
        if (gillcolor == "r")
            posionousGillGreen++;
        if (gillcolor == "o")
            posionousGillOrange++;
        if (gillcolor == "p")
            posionousGillPink++;
        if (gillcolor == "u")
            posionousGillPurple++;
        if (gillcolor == "e")
            posionousGillRed++;
        if (gillcolor == "w")
            posionousGillWhite++;
        if (gillcolor == "y")
            posionousGillYellow++;
        //stalkshape
        if (stalkshape == "e")
            posionousEnlarging++;
        if (stalkshape == "t")
            posionousTapering++;
        //stalkroot
        if (stalkroot == "b")
            posionousBulbous++;
        if (stalkroot == "c")
            posionousClub++;
        if (stalkroot == "u")
            posionousCup++;
        if (stalkroot == "e")
            posionousEqual++;
        if (stalkroot == "z")
            posionousRhizomorphs++;
        if (stalkroot == "r")
            posionousRooted++;
        if (stalkroot == "?")
            posionousMissing++;
        //stalksurfaceabove
        if (stalksurfaceabove == "f")
            posionousAboveFibrous++;
        if (stalksurfaceabove == "y")
            posionousAboveScaly++;
        if (stalksurfaceabove == "k")
            posionousAboveSilky++;
        if (stalksurfaceabove == "s")
            posionousAboveSmooth++;
        //stalksurfacebelow
        if (stalksurfacebelow == "f")
            posionousBelowFibrous++;
        if (stalksurfacebelow == "y")
            posionousBelowScaly++;
        if (stalksurfacebelow == "k")
            posionousBelowSilky++;
        if (stalksurfacebelow == "s")
            posionousBelowSmooth++;
        //stalkcolorabove
        if (stalkcolorabove == "n")
            posionousAboveBrown++;
        if (stalkcolorabove == "b")
            posionousAboveBuff++;
        if (stalkcolorabove == "c")
            posionousAboveCinnamon++;
        if (stalkcolorabove == "g")
            posionousAboveGray++;
        if (stalkcolorabove == "o")
            posionousAboveOrange++;
        if (stalkcolorabove == "p")
            posionousAbovePink++;
        if (stalkcolorabove == "e")
            posionousAboveRed++;
        if (stalkcolorabove == "w")
            posionousAboveWhite++;
        if (stalkcolorabove == "y")
            posionousAboveYellow++;
        //stalkcolorbelow
        if (stalkcolorbelow == "n")
            posionousBelowBrown++;
        if (stalkcolorbelow == "b")
            posionousBelowBuff++;
        if (stalkcolorbelow == "c")
            posionousBelowCinnamon++;
        if (stalkcolorbelow == "g")
            posionousBelowGray++;
        if (stalkcolorbelow == "o")
            posionousBelowOrange++;
        if (stalkcolorbelow == "p")
            posionousBelowPink++;
        if (stalkcolorbelow == "e")
            posionousBelowRed++;
        if (stalkcolorbelow == "w")
            posionousBelowWhite++;
        if (stalkcolorbelow == "y")
            posionousBelowYellow++;
        //veiltype
        if (veiltype == "p")
            posionousPartial++;
        if (veiltype == "u")
            posionousUniversal++;
        //veilcolor
        if (veilcolor == "n")
            posionousVeilBrown++;
        if (veilcolor == "o")
            posionousVeilOrange++;
        if (veilcolor == "w")
            posionousVeilWhite++;
        if (veilcolor == "y")
            posionousVeilYellow++;
        //ringnumber
        if (ringnumber == "n")
            posionousNumberNone++;
        if (ringnumber == "o")
            posionousNumberOne++;
        if(ringnumber == "t")
            posionousNumberTwo++;
        //ringtype
        if (ringtype == "c")
            posionousTypeCobwebby++;
        if (ringtype == "e")
            posionousTypeEvanescent++;
        if (ringtype == "f")
            posionousTypeFlaring++;
        if (ringtype == "l")
            posionousTypeLarge++;
        if (ringtype == "n")
            posionousTypeNone++;
        if (ringtype == "p")
            posionousTypePendant++;
        if (ringtype == "s")
            posionousTypeSheathing++;
        if (ringtype == "z")
            posionousTypeZone++;
        //sporecolor
        if (sporecolor == "k")
            posionousSporeBlack++;
        if (sporecolor == "n")
            posionousSporeBrown++;
        if (sporecolor == "b")
            posionousSporeBuff++;
        if (sporecolor == "h")
            posionousSporeChocolate++;
        if (sporecolor == "r")
            posionousSporeGreen++;
        if (sporecolor == "o")
            posionousSporeOrange++;
        if (sporecolor == "u")
            posionousSporePurple++;
        if (sporecolor == "w")
            posionousSporeWhite++;
        if (sporecolor == "y")
            posionousSporeYellow++;
        //population
        if (population == "a")
            posionousAbundant++;
        if (population == "c")
            posionousClustered;
        if (population == "n")
            posionousNumerous++;
        if (population == "s")
            posionousScattered++;
        if (population == "v")
            posionousSeveral++;
        if (population == "y")
            posionousSolitary++;
        //habitat
        if (habitat == "g")
            posionousGrasses++;
        if (habitat == "l")
            posionousLeaves++;
        if (habitat == "m")
            posionousMeadows++;
        if (habitat == "p")
            posionousPaths++;
        if (habitat == "u")
            posionousUrban++;
        if (habitat == "w")
            posionousWaste++;
        if (habitat == "d")
            posionousWoods++;
    }
      
}

void predictionChecking(string line_) //based on findCharacteristics, determines if edible or posionous for the remaining mushrooms
{
    string classtype = line_.substr(0, 1);
    string capshape = line_.substr(2, 1);
    string capsurface = line_.substr(4, 1);
    string capcolor = line_.substr(6, 1);
    string bruises = line_.substr(8, 1);
    string odor = line_.substr(10, 1);
    string gillattachment = line_.substr(12, 1);
    string gillspacing = line_.substr(14, 1);
    string gillsize = line_.substr(16, 1);
    string gillcolor = line_.substr(18, 1);
    string stalkshape = line_.substr(20, 1);
    string stalkroot = line_.substr(22, 1);
    string stalksurfaceabove = line_.substr(24, 1);
    string stalksurfacebelow = line_.substr(26, 1);
    string stalkcolorabove = line_.substr(28, 1);
    string stalkcolorbelow = line_.substr(30, 1);
    string veiltype = line_.substr(32, 1);
    string veilcolor = line_.substr(34, 1);
    string ringnumber = line_.substr(36, 1);
    string ringtype = line_.substr(38, 1);
    string sporecolor = line_.substr(40, 1);
    string population = line_.substr(42, 1);
    string habitat = line_.substr(44, 1);

    int total = 0;

    //capshape
    if (capshape == "b")
        total += totalBell;
    if (capshape == "c")
        total += totalConical;
    if (capshape == "x")
        total += totalConvex;
    if (capshape == "f")
        total += totalFlat;
    if (capshape == "k")
        total += totalKnobbed;
    if (capshape == "s")
        total += totalSunken;
    //capsurface
    if (capsurface == "f")
        total += totalFibrous;
    if (capsurface == "g")
        total += totalGrooves;
    if (capsurface == "y")
        total += totalScaly;
    if (capsurface == "s")
        total += totalSmooth;
    //capcolor
    if (capcolor == "n")
        total += totalBrown;
    if (capcolor == "b")
        total += totalBuff;
    if (capcolor == "c")
        total += totalCinnamon;
    if (capcolor == "g")
        total += totalGray;
    if (capcolor == "r")
        total += totalGreen;
    if (capcolor == "p")
        total += totalPink;
    if (capcolor == "u")
        total += totalPurple;
    if (capcolor == "e")
        total += totalRed;
    if (capcolor == "w")
        total += totalWhite;
    if (capcolor == "y")
        total += totalYellow;
    //bruises
    if (bruises == "t")
        total += totalBruises;
    if (bruises == "f")
        total += totalNo;
    //odor
    if (odor == "a")
        total += totalAlmond;
    if (odor == "l")
        total += totalAnise;
    if (odor == "c")
        total += totalCreosote;
    if (odor == "y")
        total += totalFishy;
    if (odor == "f")
        total += totalFoul;
    if (odor == "m")
        total += totalMusty;
    if (odor == "n")
        total += totalNone;
    if (odor == "p")
        total += totalPungent;
    if (odor == "s")
        total += totalSpicy;
    //gillattachment
    if (gillattachment == "a")
        total += totalAttached;
    if (gillattachment == "d")
        total += totalDescending;
    if (gillattachment == "f")
        total += totalFree;
    if (gillattachment == "n")
        total += totalNotched;
    //gillspacing
    if (gillspacing == "c")
        total += totalClose;
    if (gillspacing == "w")
        total += totalCrowded;
    if (gillspacing == "d")
        total += totalDistant;
    //gillsize
    if (gillsize == "b")
        total += totalBroad;
    if (gillsize == "n")
        total += totalNarrow;
    //gillcolor
    if (gillcolor == "k")
        total += totalGillBlack;
    if (gillcolor == "n")
        total += totalGillBrown;
    if (gillcolor == "b")
        total += totalGillBuff;
    if (gillcolor == "h")
        total += totalGillChocolate;
    if (gillcolor == "g")
        total += totalGillGray;
    if (gillcolor == "r")
        total += totalGillGreen;
    if (gillcolor == "o")
        total += totalGillOrange;
    if (gillcolor == "p")
        total += totalGillPink;
    if (gillcolor == "u")
        total += totalGillPurple;
    if (gillcolor == "e")
        total += totalGillRed;
    if (gillcolor == "w")
        total += totalGillWhite;
    if (gillcolor == "y")
        total += totalGillYellow;
    //stalkshape
    if (stalkshape == "e")
        total += totalEnlarging;
    if (stalkshape == "t")
        total += totalTapering;
    //stalkroot
    if (stalkroot == "b")
        total += totalBulbous;
    if (stalkroot == "c")
        total += totalClub;
    if (stalkroot == "u")
        total += totalCup;
    if (stalkroot == "e")
        total += totalEqual;
    if (stalkroot == "z")
        total += totalRhizomorphs;
    if (stalkroot == "r")
        total += totalRooted;
    if (stalkroot == "?")
        total += totalMissing;
    //stalksurfaceabove
    if (stalksurfaceabove == "f")
        total += totalAboveFibrous;
    if (stalksurfaceabove == "y")
        total += totalAboveScaly;
    if (stalksurfaceabove == "k")
        total += totalAboveSilky;
    if (stalksurfaceabove == "s")
        total += totalAboveSmooth;
    //stalksurfacebelow
    if (stalksurfacebelow == "f")
        total += totalBelowFibrous;
    if (stalksurfacebelow == "y")
        total += totalBelowScaly;
    if (stalksurfacebelow == "k")
        total += totalBelowSilky;
    if (stalksurfacebelow == "s")
        total += totalBelowSmooth;
    //stalkcolorabove
    if (stalkcolorabove == "n")
        total += totalAboveBrown;
    if (stalkcolorabove == "b")
        total += totalAboveBuff;
    if (stalkcolorabove == "c")
        total += totalAboveCinnamon;
    if (stalkcolorabove == "g")
        total += totalAboveGray;
    if (stalkcolorabove == "o")
        total += totalAboveOrange;
    if (stalkcolorabove == "p")
        total += totalAbovePink;
    if (stalkcolorabove == "e")
        total += totalAboveRed;
    if (stalkcolorabove == "w")
        total += totalAboveWhite;
    if (stalkcolorabove == "y")
        total += totalAboveYellow;
    //stalkcolorbelow
    if (stalkcolorbelow == "n")
        total += totalBelowBrown;
    if (stalkcolorbelow == "b")
        total += totalBelowBuff;
    if (stalkcolorbelow == "c")
        total += totalBelowCinnamon;
    if (stalkcolorbelow == "g")
        total += totalBelowGray;
    if (stalkcolorbelow == "o")
        total += totalBelowOrange;
    if (stalkcolorbelow == "p")
        total += totalBelowPink;
    if (stalkcolorbelow == "e")
        total += totalBelowRed;
    if (stalkcolorbelow == "w")
        total += totalBelowWhite;
    if (stalkcolorbelow == "y")
        total += totalBelowYellow;
    //veiltype
    if (veiltype == "p")
        total += totalPartial;
    if (veiltype == "u")
        total += totalUniversal;
    //veilcolor
    if (veilcolor == "n")
        total += totalVeilBrown;
    if (veilcolor == "o")
        total += totalVeilOrange;
    if (veilcolor == "w")
        total += totalVeilWhite;
    if (veilcolor == "y")
        total += totalVeilYellow;
    //ringnumber
    if (ringnumber == "n")
        total += totalNumberNone;
    if (ringnumber == "o")
        total += totalNumberOne;
    if (ringnumber == "t")
        total += totalNumberTwo;
    //ringtype
    if (ringtype == "c")
        total += totalTypeCobwebby;
    if (ringtype == "e")
        total += totalTypeEvanescent;
    if (ringtype == "f")
        total += totalTypeFlaring;
    if (ringtype == "l")
        total += totalTypeLarge;
    if (ringtype == "n")
        total += totalTypeNone;
    if (ringtype == "p")
        total += totalTypePendant;
    if (ringtype == "s")
        total += totalTypeSheathing;
    if (ringtype == "z")
        total += totalTypeZone;
    //sporecolor
    if (sporecolor == "k")
        total += totalSporeBlack;
    if (sporecolor == "n")
        total += totalSporeBrown;
    if (sporecolor == "b")
        total += totalSporeBuff;
    if (sporecolor == "h")
        total += totalSporeChocolate;
    if (sporecolor == "r")
        total += totalSporeGreen;
    if (sporecolor == "o")
        total += totalSporeOrange;
    if (sporecolor == "u")
        total += totalSporePurple;
    if (sporecolor == "w")
        total += totalSporeWhite;
    if (sporecolor == "y")
        total += totalSporeYellow;
    //population
    if (population == "a")
        total += totalAbundant;
    if (population == "c")
        total += totalClustered;
    if (population == "n")
        total += totalNumerous;
    if (population == "s")
        total += totalScattered;
    if (population == "v")
        total += totalSeveral;
    if (population == "y")
        total += totalSolitary;
    //habitat
    if (habitat == "g")
        total += totalGrasses;
    if (habitat == "l")
        total += totalLeaves;
    if (habitat == "m")
        total += totalMeadows;
    if (habitat == "p")
        total += totalPaths;
    if (habitat == "u")
        total += totalUrban;
    if (habitat == "w")
        total += totalWaste;
    if (habitat == "d")
        total += totalWoods;

    if (total > 0)
        cout << "e ";
    if (total < 0)
        cout << "p ";
    if (total == 0)
        cout << "inconclusive ";
    cout << classtype << endl;

}

