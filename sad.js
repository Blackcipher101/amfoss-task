const { createApolloFetch } = require('apollo-fetch');

const fetch = createApolloFetch({
  uri: 'https://api.graphql.jobs/',
});

fetch({
  query: '{ posts { title }}',
}).then(res => {
  console.log(res.data);
});

// You can also easily pass variables for dynamic arguments
fetch({
  query: `query{
  jobs{
    id
    title
  }
  
  
}`,
  variables: { id: 1 },
}).then(res => {
  console.log(res.data);
});
