inherit ITEM;

void create()
{
        set_name("��Կ��",({"key"}));
        set_weight(300);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit","��");
                set("material","iron");
                set("long","����һ�ѳ�����Կ�ף��⼣�߰ߡ�\n");
}
        setup();
}

