const stateForm = document.getElementById('form2');
const Details = document.getElementById('details2');


const getState= async(state) => {
    
    const base = 'https://api.covidindiatracker.com/state_data.json';
    const response = await fetch(base);
    const data  =await response.json();
    return data;

};

const updateui = (data,state) => {

    console.log(state);
    const stateDets = data.stateDets;
    console.log(stateDets);
    for(i = 0; i < stateDets.length; i++){
        if(stateDets[i].state.toLowerCase() == state.toLowerCase()){
            console.log(stateDets[i]);
            obj = stateDets[i];
        }
    }

Details.innerHTML = `

<div class="row">
<div class="col-lg-12">
    
<h2>${state}</h2>
    
</div> 
</div> 
<div class="row">
<div class="col-lg-12">

    <!-- Card-->
    <div class="card">
        <div class="card-body">
            <div class="card-title">CASES</div>
            
            <hr class="cell-divide-hr">
            <div class="price">
                <span class="value">${obj.confirmed}</span>
                <div class="frequency"></div>
            </div>
            <hr class="cell-divide-hr">
            
            
        </div>
    </div> 
    

   <!-- Card-->
   <div class="card">
    <div class="card-body">
        <div class="card-title">ACTIVE</div>
        
        <hr class="cell-divide-hr">
        <div class="price">
            <span class="value">${obj.active}</span>
            <div class="frequency"></div>
        </div>
        <hr class="cell-divide-hr">
        
        
    </div>
</div> 


   <!-- Card-->
   <div class="card">
    <div class="card-body">
        <div class="card-title">RECOVERED</div>
        
        <hr class="cell-divide-hr">
        <div class="price">
            <span class="value">${obj.recovered}</span>
            <div class="frequency"></div>
        </div>
        <hr class="cell-divide-hr">
        
        
    </div>
</div> 

<!-- Card-->
<div class="card">
    <div class="card-body">
        <div class="card-title">DEATHS</div>
        
        <hr class="cell-divide-hr">
        <div class="price">
            <span class="value">${obj.deaths}</span>
            <div class="frequency"></div>
        </div>
        <hr class="cell-divide-hr">
        
        
    </div>
</div> 




</div> 
</div> 

`
};


const updateState = async(state) => {

  const stateDets = await getState(state);
    return{ stateDets };

};

// execution starts from here
stateForm.addEventListener('submit',e => {

    console.clear();//clears the console each time a new place is entered
    e.preventDefault(); //to prevent default action of reloading of page
    //get state value
    const state = stateForm.state.value.trim();
    console.log(state);
    stateForm.reset();
    //update the UI with new country
    updateState(state)
        .then(data => updateui(data,state))
        .catch(err => console.log(err));











        url = 'https://api.covid19india.org/data.json';
    
        var	datapoint1 = [];
        var	datapoint2 = [];
        var	datapoint3 = [];
        
        const fetchData = async(url) => {
          const response = await fetch(url);
          const data = await response.json();
          return data ;
        }
        
        const updateData = (data) => {
        
            console.log(data);
        
        console.log(data.cases_time_series[200].totalconfirmed);
        
        for(var i=0;i < data.cases_time_series.length ;i++)
            {
                datapoint1.push({x:new Date(data.cases_time_series[i].date),y:parseInt(data.cases_time_series[i].totalconfirmed)});
                datapoint2.push({x:new Date(data.cases_time_series[i].date),y:parseInt(data.cases_time_series[i].totaldeceased)});
                datapoint3.push({x:new Date(data.cases_time_series[i].date),y:parseInt(data.cases_time_series[i].totalrecovered)});
            }
        console.log(datapoint1);
            
        
        
            
        var chart = new CanvasJS.Chart("chartContainer", {
            title: {
                text: "Covid Data"
            },
            theme: "dark2",
            axisX: {
                valueFormatString: "DD MMM"
            },
            axisY2: {
                title: "Cases",
                
            },
            toolTip: {
                shared: true
            },
            legend: {
                cursor: "pointer",
                verticalAlign: "top",
                horizontalAlign: "center",
                dockInsidePlotArea: true,
                itemclick: toogleDataSeries
            },
            data: [{
                type:"line",
                axisYType: "secondary",
                name: "confirmed",
                showInLegend: true,
                markerSize: 0,//points located ka marker size that dot
                dataPoints: datapoint1
            },
            {
                type: "line",
                axisYType: "secondary",
                name: "diseased",
                showInLegend: true,
                markerSize: 0,
                dataPoints: datapoint2
            },
            {
                type: "line",
                axisYType: "secondary",
                name: "recovered",
                showInLegend: true,
                markerSize: 0,
                dataPoints: datapoint3
            }
            ]
        });
        chart.render();
        
        function toogleDataSeries(e){
            if (typeof(e.dataSeries.visible) === "undefined" || e.dataSeries.visible) {
                e.dataSeries.visible = false;
            } else{
                e.dataSeries.visible = true;
            }
            chart.render();
        } 
        
        
        
        }
        
        
        
        fetchData(url)
            .then(data => {
              console.log(data.cases_time_series);
               updateData(data)
            })
            .catch(error => {
                console.log(error);
            });
        






















})



























// window.onload = function () {


    
        
    
    
//     }