package com.example.myapplication;

public class networkmodel {
    private String wf_name;
    private String ip_adress;

    // constructors

    public networkmodel(String wf_name, String ip_adress) {
        this.wf_name = wf_name;
        this.ip_adress = ip_adress;
    }

    public networkmodel() {
    }

    //getters and setters


    public String getWf_name() {
        return wf_name;
    }

    public void setWf_name(String wf_name) {
        this.wf_name = wf_name;
    }

    public String getIp_adress() {
        return ip_adress;
    }

    public void setIp_adress(String ip_adress) {
        this.ip_adress = ip_adress;
    }
}
