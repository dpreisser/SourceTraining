
inline void hw_rx_complete(void) 
{
        *HW_STS_REG |= !L1_TX_COMPLETE;
}

inline unsigned char hw_data_avail(void) 
{
        return(*HW_STS_REG & L1_TX_COMPLETE);
}

inline unsigned char hw_rx_byte(void)
{
    return(*HW_DATA_REG);

}
