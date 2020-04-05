/*
 * COST CALCULATOR
 */

#include <iostream>

int main() {
    const float SM_ROOM_FEE {25.0};
    const float LG_ROOM_FEE {35.0};
    const float TAX_RATE {6.0};
    const unsigned int PROPOSAL_PERIOD {30};

    unsigned int sm_rooms_for_cleaning {0};
    unsigned int lg_rooms_for_cleaning {0};
    float cost_sm_rooms {0.0};
    float cost_lg_rooms {0.0};
    float cost_total {0.0};
    float taxes {0.0};
    float total {0.0};

    std::cout << "Enter count of small rooms for cleaning: "<< std::endl;
    std::cin >> sm_rooms_for_cleaning;
    std::cout << "Enter count of large rooms for cleaning: " << std::endl;
    std::cin >> lg_rooms_for_cleaning;

    cost_sm_rooms = (float)sm_rooms_for_cleaning * SM_ROOM_FEE;
    cost_lg_rooms = (float)lg_rooms_for_cleaning * LG_ROOM_FEE;
    cost_total = cost_lg_rooms + cost_sm_rooms;
    taxes = cost_total * TAX_RATE / 100;
    total = cost_total + taxes;

    std::cout << "Estimate for carpet cleaning service" << std::endl;
    std::cout << "Number of small rooms for cleaning: " << sm_rooms_for_cleaning << std::endl;
    std::cout << "Number of large rooms for cleaning: " << lg_rooms_for_cleaning << std::endl;
    std::cout << "Price per small room: $" << SM_ROOM_FEE << std::endl;
    std::cout << "Price per large room: $" << LG_ROOM_FEE << std::endl;
    std::cout << "Cost: $" << cost_total << std::endl;
    std::cout << "Tax: $" << taxes << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << "Total: $" << total << std::endl;
    std::cout << "This proposal is valid for: " << PROPOSAL_PERIOD << " days" << std::endl;

    return 0;
}
