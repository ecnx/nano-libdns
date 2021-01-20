/* ------------------------------------------------------------------
 * LibDNS - Portable DNS Client
 * ------------------------------------------------------------------ */

#ifndef DNS_ROOT_H
#define DNS_ROOT_H

/**
 * Address list of DNS Root Servers
 */
static const unsigned int dns_servers[] = {
    0xc6290004, /* a.root-servers.net 198.41.0.4, 2001:503:ba3e::2:30 VeriSign, Inc. */
    0xc7090ec9, /* b.root-servers.net 199.9.14.201, 2001:500:200::b University of Southern California (ISI) */
    0xc021040c, /* c.root-servers.net 192.33.4.12, 2001:500:2::c Cogent Communications */
    0xc7075b0d, /* d.root-servers.net 199.7.91.13, 2001:500:2d::d University of Maryland */
    0xc0cbe60a, /* e.root-servers.net 192.203.230.10, 2001:500:a8::e NASA (Ames Research Center) */
    0xc00505f1, /* f.root-servers.net 192.5.5.241, 2001:500:2f::f Internet Systems Consortium, Inc. */
    0xc0702404, /* g.root-servers.net 192.112.36.4, 2001:500:12::d0d US Department of Defense (NIC) */
    0xc661be35, /* h.root-servers.net 198.97.190.53, 2001:500:1::53 US Army (Research Lab) */
    0xc0249411, /* i.root-servers.net 192.36.148.17, 2001:7fe::53 Netnod */
    0xc03a801e, /* j.root-servers.net 192.58.128.30, 2001:503:c27::2:30 VeriSign, Inc. */
    0xc1000e81, /* k.root-servers.net 193.0.14.129, 2001:7fd::1 RIPE NCC */
    0xc707532a, /* l.root-servers.net 199.7.83.42, 2001:500:9f::42 ICANN */
    0xca0c1b21  /* m.root-servers.net 202.12.27.33, 2001:dc3::35 WIDE Project */
};

#endif
