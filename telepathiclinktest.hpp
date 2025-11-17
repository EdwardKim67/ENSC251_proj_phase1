#ifndef TELEPATHICLINKTEST_HPP
#define TELEPATHICLINKTEST_HPP

class TelepathicLinkTest {
private:
    int signalStrength;
    int cognitiveLink;
    int empathicOverlay;
    int cognitiveResistance;
    int total;

    void calculateTotal();

public:
    TelepathicLinkTest(int signal, int cognitive, int empathic, int resistance);
    
    // accessor function (getter)
    int getSignalStrength() const;
    int getCognitiveLink() const;
    int getEmpathicOverlay() const;
    int getCognitiveResistance() const;
    int getTotal() const;

    // mutator function (setter)
    void setSignalStrength(int strength);
    void setCognitiveLink(int link);
    void setEmpathicOverlay(int overlay);
    void setCognitiveResistance(int resistance);
};
#endif
